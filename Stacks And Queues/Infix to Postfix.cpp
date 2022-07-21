/*
Question:Infix to Postfix
Link:https://practice.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

Approach:
1. if you have a operand , directly push to postfix
2. if operator
    if opening bracket--push inside stack
    if closing bracket- pop everything between closing and opening bracket and push to postfix
    if current operator priority> priority at top of stack ------> then push
    pop untill current element priority less than stack top and push popped element to postfix

3. At last push all elementsto postfix


*/
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        
        int n=s.length();
        if(n==0)
         return s;
        
        string postfix;
        
        unordered_map<char,int>m;
        
        m.insert({'+',1});
        m.insert({'-',1});
        m.insert({'*',2});
        m.insert({'/',2});
        m.insert({'^',3});
        
        stack<char>stk;
        
        int i=0;
        while(i<n)
        {
            char ch=s[i]; // stack character
            
            if(ch>='a' and ch<='z') //operand
             {
                 postfix.push_back(ch);
             }
            else if(stk.empty() or ch=='(')  // operator
            { 
                stk.push(ch);
            }
            else if( ch==')')//closing bracket
            {
                while(stk.empty()==0 and stk.top()!='(')
                {
                  postfix.push_back(stk.top());
                  stk.pop();
                }
                    if(stk.empty()==0)
                     stk.pop();
            }
            else if(m[ch]>m[stk.top()]) //higher precedence operator
            {
                stk.push(ch);
            }
            else
            {
                while(stk.empty()==0 and m[ch]<=m[stk.top()])
                {
                    postfix.push_back(stk.top());
                    stk.pop();
                }
                stk.push(ch);
        
            }
            i++;
        }
        
        while(stk.empty()==0)
        {
            postfix.push_back(stk.top());
            stk.pop();
        }
        return postfix;
    }
};

