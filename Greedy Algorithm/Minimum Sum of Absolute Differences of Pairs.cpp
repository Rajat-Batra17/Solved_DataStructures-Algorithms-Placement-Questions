/*
Question: Minimum Sum of Absolute Differences of Pairs
LINK:https://practice.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1/
*/
class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int n)
    {
        long long int ans=0;
        if(n==0)
         return 0;
        
        // absolute diff will be minimum if both have as less difference between them as possible
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        // sorted both the array
        for(int i=0;i<n;i++)
         ans+=abs(A[i]-B[i]);
         
        return ans;
    }
};
