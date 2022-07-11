/*
QUESTION : Maximum difference of zeros and ones in binary string
LINK: https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1#
*/
class Solution{
public:	
	int maxSubstring(string s)
	{
	   /*
	   
	   WE NEED TO MAXIMIZE (NUMBER OF ZERO - NUMBER OF ONES) WHICH MEANS ZEROES SHOULD
	   BE AS MANY AS POSSIBLE AND 1 SHOULD BE AS LESS AS POSSIBLE.
	   
	   steps:
	   1. Ignore initial ones, serve us no use; if all ones return -1.
	   2. iterate and increament one and  zero according; if one>zero any momet;
	    reinitgialize zero and 1 to zero
	   3. ans=max(ans,zero-one) 
	   */
	   
	   int n=s.length();
	   int i=0;
	   while(i<n and s[i]=='1')
	    i++;
	   
	   if(i==n)
	    return -1;
	   
	   int zero=0;
	   int one=0;
	   int ans=0;
	   
	   for(;i<n;i++)
	   {
	       if(s[i]=='0')
	        zero++;
	       else
	        one++;
	       
	       if(one>=zero)
	       {
	           zero=0;
	           one=0;
	       }
	       else
	       {
	           ans=max(ans,(zero-one));
	       }
	   }
	   return ans;
	}
};
