/*

QUESTION: Maximum sum increasing subsequence

LINK:https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#

APPROACH: 

Since we want maximum sum, and all array elements are positive here
so we will try to have as many elements as possible.

Let dp[i]=maximum sum of incresing subsequence , if we have elements till here only (i only)
and it's compulsory to consider the ith element.

Therefore for each i, we do travel from 0 to i-1 and if that elemet is less than ith element 
then it means our ith element can be part of that subsequence; we take max out of all such 
numbers and then add it to arr[i];

At last we do find maximum element in the dp array and that is our answer

*/
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	   if(n==0)
	    return 0;
	   
	   if(n==1)
	    return arr[0];
	    
	   vector<int>dp(n,0);
	   dp[0]=arr[0];
	   for(int i=1;i<n;i++)
	   {
	       int x=0;
	       for(int j=0;j<i;j++)
	       {
	           if(arr[j]<arr[i])
	           {
	               x=max(x,dp[j]);
	           }
	       }

	        dp[i]=arr[i]+x;
	   }
	   int ans=0;
	   for(int i=0;i<n;i++)
	    ans=max(ans,dp[i]);
	    
	    return ans;
	}  
};

