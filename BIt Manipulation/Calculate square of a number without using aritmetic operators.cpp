/*
QUESTION LINK:
https://www.geeksforgeeks.org/calculate-square-of-a-number-without-using-and-pow/

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fun1(int n)    // O(N) TIME --->repetitve addition
{
	if(n<0)
	 n=-n;
	 
	int res=0;
	for(int i=0;i<n;i++)
	{
		res+=n;
	}
	return res;
}

int fun2(int n) // O(log n) time, each time n is divided by 2
{
	if(n==0)
	 return 0;
	 
	if(n<0)
	 n=-n; // square of negative number is also positive
	
	if(n==1)
	 return 1;
	/*
	if n is even --> n=2*x--> (n^2)=4*x^2 ===>4*(n/2)^2 
	if n is even -->n=2*x +1 ===>(n^2)=4*(x^2) +4*x +1 and x=n/2;
	*/
	int temp=n;
	if(temp&1)// number odd
	 return 4*fun2(n>>1) + 4*(n>>1) + 1; // to get n/2 we do n>>1;
	else
	 return 4*fun2(n>>1); 
	  
}

int fun3(int n)
{
	
	if(n<0)
	 n=-n; // square of negative number is also positive
	int times=n;
	int ans=0;
	
	while(times)
	{
		int count=0;
		int current=1;
		while( (current<<1)<=times)
		{
		count++;
		current=current<<1;
		}
		ans=ans+(n<<count);
		times=times-current;
		
	}
	return  ans;
}
int main()
{
   int a=8;
   int b=-7;
   int c=10;
   
   cout<<" Square of "<<a<<" is "<<fun1(a)<<endl;
   cout<<" Square of "<<b<<" is "<<fun2(b)<<endl;
   cout<<" Square of "<<c<<" is "<<fun3(c)<<endl;	
   
   return 0;
}
