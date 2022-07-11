/*
QUESTION:BBT counter
LINK: https://practice.geeksforgeeks.org/problems/bbt-counter4914/1/
*/

/*
APPROACH

if tree of height h, we have basically 3 options

left height=h-1 and right height=h-1
left height=h-2 and right height=h-1
left height=h-1 and right height=h-2

therefor dp[h]=2*dp[h-1]*dp[h-2] + dp[h-1]*dp[h-1]
dp[0]=1;
dp[1]=1;
dp[2]=3;

// dry run and se the magic
*/
int m=1000000007;
class Solution {
  public:
    long long int countBT(int h) { 
     
     vector<long long int>dp(h+1,1);
     
     if(h==0 or h==1)
      return 1;
      
     for(int i=2;i<=h;i++)
     {
         int a= ( (dp[i-1]%m) * (dp[i-2]%m))%m;
         int b= ( (dp[i-1])%m * (dp[i-1])%m )%m;
         
         dp[i] = ( ( (2%m)*(a%m) )%m +(b%m) )%m;
     }
     return dp[h];
      
    }
};
