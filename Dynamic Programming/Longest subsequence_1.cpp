/*
QUESTION:Longest subsequence-1
LINK:https://practice.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1

APPROACH: minimm subsequence will be of length 1; single element
For each element:
{
    We look for all those number , with which is absolute difference is one; and take
    maximum of that. ALl those numbers have already taken in consideration numbers which have
    absoliutedifference with them as 1.
    similar to longest increasing subsequence problem
}
*/
class Solution{
public:
    int longestSubsequence(int n, int arr[])
    {
        if(n==0 or n==1)
         return n;
        
        vector<int>dp(n,1);
        
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(abs(arr[i]-arr[j])==1)
                 dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
         ans=max(ans,dp[i]);
        
        return ans; 
    }
};
