
/*
QUESTION lINK:
https://practice.geeksforgeeks.org/problems/set-bits0143/1
*/

class Solution 
{
  public:
    int setBits(int n)
    {
     int ans=0;
     while(n)
     {
         n=n&(n-1);// remove the last set bit
         ans++;
     }
     return ans;
    }
};
