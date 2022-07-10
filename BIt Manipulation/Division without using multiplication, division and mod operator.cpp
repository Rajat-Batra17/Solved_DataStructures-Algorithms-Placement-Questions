/*
QUESTION LINK
https://practice.geeksforgeeks.org/problems/division-without-using-multiplication-division-and-mod-operator/1/#

*/
class Solution
{
    public:
    long long divide(long long d, long long s)
    
    // d denotes divident  and s denotes divisor
    {
        /*
        DIVIDENT=QUOTIENT*DIVISOR +REMAINDER
        DIVIDENT-(QUOTIENT*DIVISOR)=REMAINDER
        DIVIDENT -(QUOTIENT*DIVISOR) >=0
        AND WE CAN REPRESNT QUOTIENT AS POWER OF 2
        
        EXAMPLE IF QUPTIENT =5, WE CAN WRITE IT AS (4+1);
        
        so we gonna find max power of 2 such that (divident-(quotient*divisor)>=0)
        add this quotient to our answer then update divident as
        divident- (quotient*divisor)
        and repeat the same process till our divisor <=divident
        
        */
    
    int sign=1;
    if( (d<0 and s>0) or (d>0 and s<0))
     sign=-1;
    
    d=abs(d);
    s=abs(s);
    
   
     if(d<s) // if divident is less than divisor eg. 3/5
      return 0;
     int ans=0;
     while(d>=s)
     {
         int q=1;
         int count=0;
         while(d-(s<<count)>=0)
         {
             count++;
             q=q<<1;
         }
         q=q>>1;
         count--;
         //cout<<"q "<<q<<endl;
         ans+=q;
         //cout<<" ans "<<ans<<endl;
         d=d-(s<<count);
         //cout<<"d "<<d<<endl;
     }
      return (sign*ans);
    }
};

