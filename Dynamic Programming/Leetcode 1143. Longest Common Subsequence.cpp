/*
QUESTION:Leetcode 1143. Longest Common Subsequence
LINK:https://leetcode.com/problems/longest-common-subsequence/

APPROACH:
if last char in both string same then we will consider string upto second last character in both string
; and if doesn't match , we take maximum of (if we have oneless lenght in bith the strings)

*/

class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) 
    {
      int m=s1.length();// no of rows
      int n=s2.length(); // number of columns
        
      if(m==0 or n==0)
          return 0;
      
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};
