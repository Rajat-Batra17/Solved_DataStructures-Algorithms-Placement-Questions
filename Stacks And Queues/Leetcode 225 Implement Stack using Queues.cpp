/*
Question: Leetcode 225 Implement Stack using Queues
Link:https://leetcode.com/problems/implement-stack-using-queues/
*/

/*
class MyStack {
public:
    queue<int>q1;
    queue<int>q2; //all the elements
    MyStack() 
    {
        
    }
    
    void push(int x) 
    {
           //push all elements from queue 2 to queue 1
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        //push new element in queue2;
        q2.push(x);
        // push all elements of queu1 again to queue2
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
    }
    
    int pop() 
    {
        int x=q2.front();
        q2.pop();
        return x;
    }
    
    int top() 
    {
        return q2.front();
    }
    
    bool empty() {
        if(q2.empty())
            return true;
        else
            return false;
    }
};
*/

// NOW IMPLEMENTING USING ONE QUEUE ONLY

class MyStack {
public:
    queue<int>q;
    MyStack() 
    {
        
    }
    
    void push(int x) 
    {
        q.push(x);
        while(q.front()!=x)
        {
            int y=q.front();
            q.pop();
            q.push(y);
        }
    }
    
    int pop() 
    {
        int x=q.front();
        q.pop();
        return x;
    }
    
    int top() 
    {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())
            return true;
        else
            return false;
    }
};

