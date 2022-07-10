/* QUESTION LINK
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/bit-manipulation/copy-set-bits-in-a-range-official/ojquestion
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,left,right;
    cin>>a>>b>>left>>right;
    
    for(int i=left-1;i<right;i++)// DOING -1 BECAUSE WE ARE SHIFTING;
    // DRY RUN ONCE YOU WILL UNDERSTAND
    {
        int y=a&(1<<i);
        b=b|y;
    }
    cout<<b<<endl;
}
