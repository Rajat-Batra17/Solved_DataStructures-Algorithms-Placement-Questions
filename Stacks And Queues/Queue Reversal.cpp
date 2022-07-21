/*
Question:Queue Reversal
Link:https://practice.geeksforgeeks.org/problems/queue-reversal/1

Approach: 1. Push all queue elements to stack.
2. push all elements back to queue

*/
//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    int n=q.size();
    if(n==0 or n==1)
     return q;
     
    stack<int>s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
     
}
