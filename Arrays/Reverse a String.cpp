/*
QUESTION:Reverse a String
LINK:https://practice.geeksforgeeks.org/problems/reverse-a-string/1

APPROACH: swap first and last and so on...
*/

string reverseWord(string s)
{
    int n=s.length();
    if(n==0 or n==1)
     return s;
    
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
        
    }
    return s;
   
}
