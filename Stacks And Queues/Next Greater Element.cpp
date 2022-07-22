#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


/*
Question:Next Greater Element
Link:https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

Approach: 
1. start from the end; res[n-1]=-1; push last element in the stack
2. since we want to find the next greater element therefore ;
we will pop all those element from the stack which are smaller than the current element for all the elements
to the left of it; this element will be the greater element ; there smaller can't be.
Therefore we are doing so.

3. and if element  is smaller than stack top; simply push into stack;
*/
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> v, int n)
    {
        
       if(n==1)
       {
           return {-1};
       }
       
       
       vector<long long >res(n,0);
       n--;
       res[n]=-1;
       
       stack<long long>stk;
       stk.push(v[n]);// n points to the last element always
       n--;
       
       while(n>=0)
       {
           while(stk.empty()==0 and v[n]>=stk.top())
            stk.pop();
           
           if(stk.empty()==0)
            res[n]=stk.top();
           else
            res[n]=-1;
        
          stk.push(v[n]);    
           n--;
       }
       return res;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends
