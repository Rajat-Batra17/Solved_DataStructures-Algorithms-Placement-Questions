/*
Question: Minimum number of Coins
Link:https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1/
*/
class Solution{
public:
    vector<int> minPartition(int n)
    {
       vector<int>curr{2000,500,200,100,50,20,10,5,2,1};
       
       /* we need to make n; it works only in indian currency
       each time we will pick the max value coin so as to have minimum number of coins
       */
       int i=0;
       vector<int>v;
       while(n)
       {
           if( (n-curr[i])>=0)
           {
               n=n-curr[i];
               v.push_back(curr[i]);
               continue;
           }
           i++;
       }
       return v;
    }
};

