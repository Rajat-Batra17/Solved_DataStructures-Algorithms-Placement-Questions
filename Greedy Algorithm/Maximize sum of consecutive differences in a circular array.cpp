/*
Question:Maximize sum of consecutive differences in a circular array
Link:https://practice.geeksforgeeks.org/problems/swap-and-maximize5859/1

Approach:
1, The basic thing is to sort the array first; and then we will arrange it in the form

smallest   largest   (next smallest)    (next largest)  . . . . . . . . . . . . and so on.

because absolute differnce is maximum only when one is very large and other is small.

Firstly we implemented with using extra space; then we observed the pattern and optimised it and
did it in O(1) that is constant space;

*/

/*  WITHOUT USING EXTRA SPACE */

long long int maxSum(int arr[], int n)
{
    
    // After sorting
    // a1 a2 a3 a4 a5 a6 a7 a8 a9 a10 -- even length
    // a1 a2 a3 a4 a5 a6 a7 a8 a9 --> odd length   
    
    // Dry run using this and you will definately get to know what we are doing.
    
    sort(arr,arr+n);
    
    long long int sum=0;
    
    int i=0; // dhyan se
    int j=n-1;
    while(i<j)
     sum+=abs(arr[i++]-arr[j--]);
    
    i=1;// dhyan se
    j=n-1;
    while(i<j)
     sum+=abs(arr[i++]-arr[j--]);
    
    int mid=n/2;
    sum+=abs(arr[mid]-arr[0]);
    
    return sum;
}

/* WITH EXTRA SPACE */

long long int maxSum(int arr[], int n)
{
    
    
    sort(arr,arr+n);
    vector<int>v(n,0);
    
    int i=0;
    int j=n-1;
    int k=0;
    
    while(i<=j)
    {
        if(i==j)
         {
             v[k++]=arr[i++];
             continue;
         }
        v[k++]=arr[i++];
        v[k++]=arr[j--];
    }
    //for(int i=0;i<n;i++)
     //cout<<v[i]<<" ";
     
     //cout<<endl;
    long long int sum=0;
    for(int i=0;i<n;i++)
     {
         if(i==n-1)
          sum+=abs(v[n-1]-v[0]);
         else
          sum+=abs(v[i]-v[i+1]);
          
         //cout<<sum<<endl; 
     }
     return sum;
}
