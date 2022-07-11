/*
QUESTION:Min sum formed by digits
LINK:https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits3551/1/
*/
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // we want minimum values at higher level bits
        // so that oyur bothe numbers are minimum
        
       long long int a=0;
       long long int b=0;
       
       sort(arr,arr+n);
       for(int i=0;i<n;i++)
       {
           if( (i%2)==0)
            a=(a*10)+arr[i];
           else
            b=(b*10)+arr[i];
       }
       return a+b;
    }
};
