/*
QUESTION:LeetCode 55 Jump Game
LINK: https://leetcode.com/problems/jump-game/

APPROACH:

Each time we are maintaining a variable which stores the maximum index where we can reach;
and current is our current position where we are standing;
Each time we are checking whether our maxLimit increases or not.if yes we update maxLimit'
if at any moment we can reach the last index or can go beyond that we wil return true;
and if at any moment our current crosses the maxReach, we do return false; 


*/



class Solution 
{

    
public:
    
    bool canJump(vector<int>& v) 
    {
       int n=v.size();
       if(n==1)
           return 1;
        
        int current=0;
        int maxReach=v[0]; // initially we can reacvh upto here only
        
        int i=0;
        while(i<n)
        {
              if(maxReach>=n)
                  return true;
             
             if(maxReach<current)
                 return false;
            

             maxReach=max(current+v[i],maxReach);
             current++;
             i++;
            
        }
        return true;
    }
};
