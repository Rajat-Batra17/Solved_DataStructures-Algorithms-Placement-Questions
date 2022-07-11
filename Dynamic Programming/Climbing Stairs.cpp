/*
QUESTION: Climbing Stairs
LINK:https://leetcode.com/problems/climbing-stairs/
*/

/* here in this question each time we do have 2 choices either to take a single step or a double step
so to find total ways we do add dp[i-1]  and dp[i-2]*/
class Solution {
public:
    int climbStairs(int n)
    {
     if(n==0 or n==1)
         return 1;
        
       vector<int>dp(n+1,0);
        dp[0]=1;
        
        for(int i=1;i<=n;i++)
        {
            if( (i-1)>=0 )
                dp[i]=dp[i-1]+dp[i];
            
            if( (i-2)>=0 )
                dp[i]=dp[i-2]+dp[i];
                
        }
        return dp[n];
        
    }
};
