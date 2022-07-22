/*
Question: Leetcode 155 Min Stack or implement stack that suppost getMinimum in O(1) time
Link:    https://leetcode.com/problems/min-stack/

Approach:
1. Maintain a auxillary stack, that stores minimum element encoutered uptil now;
; similar to dp array where dp[i]-->minimum element till first i elements;

*/

class MinStack {
public:
    stack<int>minimum;// stack storing minimum upto that point
    stack<int>stk; // original stack
    MinStack() {
        
    }
    
    void push(int x)
    {
         stk.push(x);
         
         if(minimum.empty())
         {
             minimum.push(x);
             return;
         }
         
         if(x<minimum.top())
            minimum.push(x);
         else
            minimum.push(minimum.top());
        
    }
    
    void pop() 
    {
        minimum.pop();
        stk.pop();
    }
    
    int top() 
    {
        return stk.top();
    }
    
    int getMin() 
    {
        return minimum.top();
    }
};

