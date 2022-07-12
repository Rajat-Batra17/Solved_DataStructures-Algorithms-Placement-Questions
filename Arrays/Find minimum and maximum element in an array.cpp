/*
QUESTION:Find minimum and maximum element in an array
LINK:https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1/

APPROACH: Simply trvaerse and you are good to go
*/
pair<long long, long long> getMinMax(long long a[], int n)
{
    long long int maximum=INT_MIN;
    long long int minimum=INT_MAX;
    
    for(int i=0;i<n;i++)
     {
         maximum=max(maximum,a[i]);
         minimum=min(minimum,a[i]);
     }
     
     pair<long long int,long long int>p1{minimum,maximum};
     return p1;
}
