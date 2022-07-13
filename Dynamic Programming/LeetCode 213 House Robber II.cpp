/*

QUESTION:LeetCode 213 House Robber II
LINK: https://leetcode.com/problems/house-robber-ii/

APPROACH:

Here since houses are in circular fashion so we can't consider both first and last house together; 
so we have 2 choices either to consider first house or to consider last one;
so based on this we made 2 arrays , one which don't have first house and other which 
don't have last house
and we did returned the max of 2;

*/


class Solution {
    
public:
    
    int fun(vector<int>v)
    {
     int n=v.size();
     vector<int>dp=v;
     
     for(int i=2;i<n;i++)
     {
         int x=INT_MIN;
         for(int j=i-2;j>=0;j--)
             x=max(x,dp[j]);
        
         dp[i]+=x;
     }
        return max(dp[n-1],dp[n-2]);
    }
    
    int rob(vector<int>& v) 
    {
       int n=v.size();
      if(n==0)
          return 0;
      if(n==1)
          return v[0];
      if(n==2)
          return max(v[0],v[1]);
       if(n==3)
           return max(v[0],max(v[1],v[2]));
          
      vector<int>v1(v.begin(),v.end()-1);// last house not included
      vector<int>v2(v.begin()+1,v.end());// first hoiuse not included
       
      return max(fun(v1),fun(v2));  
    }
};
