/*
QUESTION:LeetCode 198 House Robber
LINK: https://leetcode.com/problems/house-robber/

APPROACH: 
The basic constraint is that we can't take consecutive houses;
let our dp[i] denotes the maximum money robber can achieve if he 
compulsorly rob house i; if he compulsory rob i, then he can't rob i-1
;therefore we take max of dp from 0 to i-1; and add it to dp[i] and assigns it to dp[i];
           
*/



class Solution {
public:
    int rob(vector<int>& v) 
    {
      int n=v.size();
      if(n==0)
          return 0;
      if(n==1)
          return v[0];
      if(n==2)
          return max(v[0],v[1]);
       
      vector<int>dp=v;
      for(int i=2;i<n;i++)
      {
          int x=INT_MIN;
          for(int j=0;j<i-1;j++)
              x=max(dp[j],x);
          
          dp[i]+=x;
      } 
        
      return max(dp[n-1],dp[n-2]) ;
        
      /*int ans=0;
        for(int i=0;i<n;i++)
            ans=max(dp[i],ans);
        return ans;
        */
    }
};
