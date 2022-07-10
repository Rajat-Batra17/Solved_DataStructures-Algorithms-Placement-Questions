
/*
QUESTION LINK:

https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1# 
*/
class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        
    // a number which is a power of 2 has only 1 bit as set
    // 0001 --->0010--->0100---->1000------>10000 .. . . . . .  .
       if(n==0)
        return false;
        
        n=n&(n-1);
        if(n==0)
         return true;
         
         return false;
        
    }
};

