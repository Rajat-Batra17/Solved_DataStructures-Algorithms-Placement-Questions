/*
Question:Pairs with specific difference

Link:https://practice.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1#

Approach:we sort the array and since we want to maximize the sum, we start from end
.. if we can take thant pair we do move 2 steps back else we do move 1 step back
 and this way we get the max sum
 
 Time= O(n*logn);
 
*/
class Solution
{
    public:
    
    int maxSumPairWithDifferenceLessThanK(int arr[], int n, int k)
    {
         
           if(n==0 or n==1)
            return 0;
            
           sort(arr,arr+n);
           
           int i=n-1;
           int j=n-2;
           int ans=0;
           while(j>=0 and i>=0)
           {
               int diff=arr[i]-arr[j];
               if(diff>=k)// not possible to consider
               {
                   i--;
                   j--;
               }
               else
               {
                   ans+=arr[i]+arr[j];
                   j=j-2;
                   i=i-2;
               }
           }
           return ans;
    }
    
};
