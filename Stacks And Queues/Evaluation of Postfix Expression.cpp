// C++ program to evaluate value of a postfix expression

/*
Question:Evaluation of Postfix Expression
Link:https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1
*/
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        int n=s.length();
        stack<int>st;
        
        int i=0;
        while(i<n)
        {
            if(s[i]>='0' and s[i]<='9')//operand
             st.push(s[i]-'0');//converting to integer
            else
            {
                int operand2=st.top();
                st.pop();
                int operand1=st.top();
                st.pop();
                
                //operand1 operand2 operator
                
                if(s[i]=='*')
                 st.push(operand1*operand2);
                else if(s[i]=='/')
                 st.push(operand1/operand2);
                else if(s[i]=='+')
                 st.push(operand1+operand2);
                else if(s[i]=='-')
                 st.push(operand1-operand2);
            }
            i++;
        }
        return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends
