/*
QUESTION:Reverse First K elements of Queue

LINK:https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

APPROACH:
1.push first k elemnts to stack.
2.push them back to queue;
3. push remaining n-k elemets from front of queue to back
*/
queue<int> modifyQueue(queue<int> q, int k) 
{
     int n=q.size();
     if(n==0 or n==1 or k==0)
      return q;
     
     stack<int>s;
     
     int i=1;
     while(i<=k and q.size()>0)
     {
         s.push(q.front());
         q.pop();
         i++;
     }
     
     while(!s.empty())
     {
         q.push(s.top());
         s.pop();
     }
     
     if(k>=n)
      return q;
     
     k=n-k;
     i=1;
     while(i<=k)
     {
         q.push(q.front());
         q.pop();
         i++;
     }
     return q;
}
