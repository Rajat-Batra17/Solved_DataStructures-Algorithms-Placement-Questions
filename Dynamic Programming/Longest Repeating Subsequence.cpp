/*
QUESTION:Longest Repeating Subsequence 
LINK:https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

 Approach: We will find longest common subsequence of the given string with itself
 so as to have the longest repeating subsequence
 . FIND LCS OF STRING WITH ITSELf; KEEP IN MIND CONSIDER
 THOSE WHERE INDEX OF FIRST AND SECOND STRING ARE NO =T SAME ONLY THEN YOU WILL 
 GET THE REQUIRED ANSWER
*/

int LCS(string s1,string s2)
{
    int m=s1.length();// no of rows;
    int n=s2.length();// number of columns
    
    if(m==0 or n==0)
     return 0;
     
     vector<vector<int>>dp(m+1,vector<int>(n+1,0));
     for(int i=1;i<=m;i++)
     {
         for(int j=1;j<=n;j++)
         {
             if(s1[i-1]==s2[j-1] and i!=j) // IMPORTANT: CHECKING INDEX NOT EQUAL
              dp[i][j]=dp[i-1][j-1]+1;
             else
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             
         }
     }
     return dp[m][n];
}
class Solution {
	public:
		int LongestRepeatingSubsequence(string s1)
		{
		    return LCS(s1,s1);
		}

};
