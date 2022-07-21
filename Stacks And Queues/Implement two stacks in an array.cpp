/*
Question:Implement two stacks in an array
Link:https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1
*/
//initially top1 is at -1 and top2 is at size of arr
// arr maximum size defined is 100;


//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
   top1++;
   arr[top1]=x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
  top2--;
  arr[top2]=x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
  if(top1==-1)
   return -1;
  
  int y=arr[top1];
  top1--;
  return y; 
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
   if(top2==size)
    return -1;
    
    int y=arr[top2];
    top2++;
    return y;
}

