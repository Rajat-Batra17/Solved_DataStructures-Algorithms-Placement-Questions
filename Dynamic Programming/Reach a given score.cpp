/*
QUESTION:Reach a given score
LINK: https://practice.geeksforgeeks.org/problems/reach-a-given-score-1587115621/1#
*/

//dp[n] is basically equal to sum of dp[n-3]+dp[n-5]+dp[n-10]

long long int count(long long int n)
{
   vector<long long int>v(n+1,0);
   if(n<3)
    return 0;
    
   v[0]=1;
   /*// since we want only unique answers and permutations doesn't work
   so we have fixed that first step will be 3, second 5 and third 10
   if we take outside loop inisde we will get all permutatiuons
   */
   vector<int>score{3,5,10};
   for(int j=0;j<3;j++) 
   {
       for(int i=0;i<=n;i++)
       {
           if(i-score[j]>=0)
            v[i]+=v[i-score[j]];
       }
   }
   return v[n];
}
