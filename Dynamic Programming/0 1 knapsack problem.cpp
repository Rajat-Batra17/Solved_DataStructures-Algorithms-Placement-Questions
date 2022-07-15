/*
QUESTION:0 - 1 Knapsack Problem

LINK:
https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

APPROACH:
For each element we do have 2 choices either to take that item or not to take;
we do check if it's possible to take , if yes then we take max of both 
to take item and not to tqake item


pls also refer: https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1
*/
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       
       if(n==0 or w==0)
        return 0;
      
      vector<vector<int>>dp(n+1,vector<int>(w+1,0));
      
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=w;j++)
          { 
              /*if infinite quantity of each item is present
              we would have not done [i-1] considering the item; because
              even after considering the item we still have that item available to be taken
              
              */
              if((j-wt[i-1])>=0) // it's possible to take the item
                  dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]+val[i-1]);
              else //not possible to take the item
                  dp[i][j]=dp[i-1][j];
             
               
          }
      }
      return dp[n][w];
    }
};

