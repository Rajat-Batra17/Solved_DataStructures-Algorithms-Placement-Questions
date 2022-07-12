/*
QUESTION: Leetcode 300. Longest Increasing Subsequence
LINK:https://leetcode.com/problems/longest-increasing-subsequence/

APPROACH:

for each number, we are looking for all those numbers whicha re less than that, and taking there maximum.
this is because , the numbers which are smaller than the number smaller than the current number; they all 
automatically be smaller than the current number.

*/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
       int n=nums.size();
       if(n==0 or n==1)
           return n;
       
        
        vector<int>dp(n,1);
        dp[0]=1;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,dp[i]);
        return ans;
       
    }
};
