/*
QUESTION: LeetCode 62 Unique Paths
LINK:     https://leetcode.com/problems/unique-paths/

APPROACH:  

At grid[i][j] , we can reach from grid[i-1][j] or grid[i][j-1];
This is because , we can move only right  and bottom; in first row and first column 
we can reach only in one way either moving left continuosly or by moving right;

*/

class Solution 
{

    public:
    
    int uniquePaths(int rows, int columns)
    {
          vector<vector<int>>dp(rows,vector<int>(columns,1));
    
      
          for(int i=1;i<rows;i++)
              for(int j=1;j<columns;j++)
                  dp[i][j]=dp[i-1][j]+dp[i][j-1];
             
          
        return dp[rows-1][columns-1];
    }
};
