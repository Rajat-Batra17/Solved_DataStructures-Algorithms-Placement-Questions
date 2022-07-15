
/*
QUESTION: Permutation Cofficient

LINK:https://www.geeksforgeeks.org/permutation-coefficient/

APPROACH: by close observation we do observe that p(n,k)=p(n,k-1)*(n-k+1);
take p(10,0)=1
     p(10,1)=p(10,0)*(10-1+1)==1*10==10
     p(10,2)=p(10,1)*(10-2+1)==10*9==90
     
     .. and so on and so forth;
since we need value of only the previous term, therefore we will do it using constant space
     
	 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	
	cout<<" Enter the value of n and k "<<endl;
	cin>>n>>k;
	
	
	int prev=1;
	if(k==0)
	{
		cout<<"1 "<<endl;
		exit(0);
	}
	
	for(int i=1;i<=k;i++)
	{
	    prev=prev*(n-i+1);	
	}
	cout<<"answer is "<<prev<<endl;
}
