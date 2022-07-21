/*
Question:Stack Using Deque
Link:https://www.codingninjas.com/codestudio/problems/stack-using-deque_1170512?leftPanelTab=0

Approach:
#include <deque> // to include
deque<type> dq; // to declare


push_back()    inserts element at the back
push_front()    inserts element at the front
pop_back()    removes element from the back
pop_front()    removes element from the front
front()    returns the element at the front
back()    returns the element at the back
at()    sets/returns the element at specified index
size()    returns the number of elements
empty()    returns true if the deque is empty
*/

# include<deque>
class Stack
{
public:
    deque<int>dq;
    Stack()
    {
    }

    // Pushes 'X' into the stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x)
    {
       dq.push_front(x); 
       return true;
    }

    // Pops top element from Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop()
    {
        if(dq.empty())
            return -1;
        int x=dq.front();
        dq.pop_front();
       return x; 
    }

    // Returns the topmost element of the stack. In case the stack is empty, it returns -1.
    int top()
    {
        if(dq.empty())
            return -1;
        return dq.front();
    }

    // Returns true if the stack is empty, otherwise false.
    bool isEmpty()
    {
       return dq.empty();
    }

    // Returns the number of elements currently present in the stack.
    int size()
    {
        return dq.size();
    }
};
