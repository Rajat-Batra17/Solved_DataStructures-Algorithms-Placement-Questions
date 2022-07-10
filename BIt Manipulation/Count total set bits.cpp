/*
QUESTION LINK:
https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1
*/
class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    
    /* it's all about analyzing the pattern
        
        NO of bit=N=1 ==>2^1  numbers  s
        
        SET BITS = 1
        0 -->0
        1--->1
    
       N=2
       SET BITS : 4    
        00-->0
        01-->1
        10-->2
        11-->3
        
        N=3
        SET BITS: 12
        
        0 00-->0
        0 01-->1
        0 10-->2
        0 11-->3
        1 00-->4
        1 01-->5
        1 10-->6
        1 11-->7
        
        N=4
        SET BITS: 32  (12*2 + (2^3))
        
        THEREFORE DP[I-1]*2 +(POWER(2,I-1));
    */
    int countSetBits(int n)
    {
       if(n==0 or n==1)
        return n;
       
       int x=log2(n); // nearest power of 2
       vector<int>dp(x+1,0);
       dp[1]=1;
       
       for(int i=2;i<=x;i++)
        dp[i]=( (dp[i-1]*2)+(1<<(i-1)));
        
        
       int ans=0;    
       
       while(n)
       {
          int y=log2(n); // nearest power of 2
          
          ans+=dp[y]; //add dp[y to answer
          
          int z=(1<<y); // total numbers covered
          
          n=n-z;  // numbers left to be covered
          
          ans+=n+1; // these number of 1's are left
          
       }
       
       // just analyze the pattern and you r good to go
       return ans;
    }
};

