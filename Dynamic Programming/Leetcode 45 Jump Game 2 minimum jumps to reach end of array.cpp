/*
QUESTION: Leetcode 45 Jump Game 2 minimum jumps to reach end of array
LINK:https://leetcode.com/problems/jump-game-ii/

APPROACH:when our steps finishes , we have to make an another jump because at that point
we can take move maximum of steps variable; when our steps ==0 we update steps by subtracting it from maxReach 
at that point and also increments our jumps

current< n-1 because we don't want to go beyond last; hume last tk he pahuchna hai
and it's given that you can assume that it is everytime possible to reavh the end
*/

class Solution {
public:
    int jump(vector<int>& v) 
    {
       int n=v.size();
       if(n==1)
           return 0;
       
        int steps=v[0];
        int maxReach=v[0];
        int jumps=1;
        
        for(int current=1;current<n-1;current++)
        {
            steps--;
            maxReach=max(maxReach,v[current]+current);
            
            if(steps==0)
            {
                steps=maxReach-current;
                jumps++;
            }
        }
        return jumps;
    }
};
