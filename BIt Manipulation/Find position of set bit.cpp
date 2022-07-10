/*
QUESTION lINK:
https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1#
*/


class Solution
{
  public:
    int findPosition(int n) {
      
      if(n==0) // base case "0 bit as set";
       return -1;
       
      int temp=n&(n-1); // removing the last set bit;
      
      if(temp) // if number has more than 1 set bits then temp won't be zero
       return -1;
       
      int x=log2(n); // to get the position of the set bit
      //log2(4)===log2(2^2)===2; hence our answer is 3 and so on
      
   
      return x+1;
     
    }
};

