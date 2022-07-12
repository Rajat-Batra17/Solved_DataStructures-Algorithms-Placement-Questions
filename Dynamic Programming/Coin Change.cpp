/*
QUESTION: Coin Change
LINK:https://leetcode.com/problems/coin-change/
*/

// Approach: each time we have all the choices of coin since we have infinite coins of each type
// there we are taking minimum of that
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        if(amount==0)
            return 0;
        
        vector<int>dp(amount+1,0);
        
        for(int i=1;i<=amount;i++)
        {
            int x=INT_MAX;
            for(int j=0;j<coins.size();j++)
            {
                if((i-coins[j])>=0 and dp[i-coins[j]]!=INT_MAX )
                    x=min(x,dp[i-coins[j]]+1);
            }
            dp[i]=x;
        }
        if(dp[amount]==INT_MAX)
            return -1;
       //INT_MAX represent that we can't make that particular amount
        return dp[amount];
            
    }
    
};
