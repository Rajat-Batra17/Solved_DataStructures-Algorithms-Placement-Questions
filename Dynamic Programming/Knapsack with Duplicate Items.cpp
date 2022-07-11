/*
QUESTION:Knapsack with Duplicate Items 
LINK:https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1#
*/

class Solution
{
public:
   int knapSack(int N, int W, int val[], int wt[])
   {
       /* APPROACH
       FIRST OF ALL ALWAYS REMEMBER THAT GREEDY DOESN'T WORK ON 0-1 KNAPSACK
       IT works only on fractional knapsack;
       here we have 2 choices either to take the element or not to take the element;
       
       //rows= n+1;
       colums=w+1;
       
       if element not taken dp[i-1][j]
       if taken val[i-1]+dp[j-wt[i-1]]
       */
       vector<vector<int>>dp(N+1,vector<int>(W+1,0));
       for(int i=1;i<N+1;i++){
           for(int j=1;j<W+1;j++)
           {
               if(j>=wt[i-1])
                   dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
               else
                   dp[i][j]=dp[i-1][j];
               
               
           }
       }
       return dp[N][W];
   }
};
