
/*
QUESTION:Edit Distance 

LINK:https://practice.geeksforgeeks.org/problems/edit-distance3702/1

APPROACH:we need to convert s to t
      taking s as columns and t as rows
      
      _  g e e k
    
    _ 0  1 2 3 4 
    g 1 
      
    e 2
      
    s 3
      
    e 4
      
    k 5
    
    if element at s[j-1]==t[i-1] ; dp[i][j]=dp[i-1][j-1]; NO OPERATION NEEDED
    ELSE
    
    dp[i][j]=min(dp[i-1][j], dp[i][j-1] , dp[i-1][j-1])+1;
    
    if replace [i-1][j-1]
    if delete  [i][j-1]
    if insert [i-1][j];
      */
      
class Solution 
{
    public:
    
    int editDistance(string s, string t) 
    {
      int n=s.length();
      int m=t.length();
      
      if(n==0)
       return m;
      
      if(m==0)
       return n;
       
       vector<vector<int>>dp(m+1,vector<int>(n+1,0));
       
       for(int i=0;i<=n;i++)
         dp[0][i]=i;
       
       for(int i=0;i<=m;i++)
        dp[i][0]=i;
       
       for(int i=1;i<=m;i++)
       {
           for(int j=1;j<=n;j++)
           {
               
                   if(s[j-1]==t[i-1])
                    dp[i][j]=dp[i-1][j-1];
                   else
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
           }
       }
       return dp[m][n];
    }
};
