/*
QUESTION:Chocolate Distribution Problem

LINK:https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/#

APPROACH:
An efficient solution is based on the observation to minimize the difference between max and min,
we must choose consecutive elements from a sorted packet. We first sort the array arr[0..n-1],
then find the subarray of size m with the minimum difference between the 
last and first elements.
*/
class Solution{
    public:
    long long findMinDiff(vector<long long>v, long long n, long long m){
     
     if(n==0 or m==0)
      return 0;
      
     sort(v.begin(),v.end());
      long long int i=0;
      long long  int j=i+m-1;
     long long int ans=INT_MAX;
     while(i<n and j<n)
     {
         ans=min(ans,v[j]-v[i]);
         i++;
         j++;
     }
     return ans;
    
    }   
};
