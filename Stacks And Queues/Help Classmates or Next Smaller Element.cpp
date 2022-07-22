//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

/*
Question : Help Classmates
Link: https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1

Approach: Equivalent to question next smaller element; and similar to next greater element

1.We wil start from the end because we want next samller element to the right
2. res[n-1]=-1
3. each time we will keep the smallest element in the top of the stack;
*/
class Solution{
    
    public:
    vector<int> help_classmate(vector<int> v, int n) 
    { 
       /*
       we just need to find out next smaller element towards right of every number
       and if are not able to find , we will give -1 at its place
       */
       
       if(n==1)
        return {-1};
       
       vector<int>res(n,0);
       n--; // we will access element by n
       
       res[n]=-1;
       stack<int>stk;
       stk.push(v[n]);
       n--;
       
       while(n>=0)
       {
           while(!stk.empty() and v[n]<=stk.top())
            stk.pop();
           
           if(!stk.empty())
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends
