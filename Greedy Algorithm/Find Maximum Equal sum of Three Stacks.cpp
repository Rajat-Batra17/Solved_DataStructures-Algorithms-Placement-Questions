/*
QUESTION: Find Maximum Equal sum of Three Stacks 
LINK:https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1/#
*/
class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3)
    {
        if(n1==0 or n2==0 or n3==0)
         return 0;
         
        int sum1=0;
        int sum2=0;
        int sum3=0;
        
        for(int i=0;i<n1;i++)
         sum1+=s1[i];
         
        for(int i=0;i<n2;i++)
         sum2+=s2[i];
        
        for(int i=0;i<n3;i++)
         sum3+=s3[i];
         /*
         APPROACH:
         maximum sum we can have = minimum of (sum of  all 3 stacks )because usse jyada 
         we can't increase) our answer, because we can't add more answers;
         therefore whatever stack has minimum value, we do start removing elements from
         other 2 stacks tilll there sum is greater than the minimum sum;
         and we keep on doing this till all the 3 sums are not equal or any of the 
         array reaches its end
         */
         
         
         //cout<<"sum1 "<<sum1<<" sum2 "<<sum2<<" sum3 "<<sum3<<endl;
        int i=0;int j=0;int k=0;
        while(sum1!=sum2 or sum2!=sum3 or sum3!=sum1)
        {
            int x=min(sum1,min(sum2,sum3));
            //cout<<"x "<<x<<endl;
            if(x==sum1)
            {
                // we pop from other stack 2 and stack 3
                
                while(sum2>sum1 and j<n2)
                {
                    sum2=sum2-s2[j];
                    j++;
                }
                
                while(sum3>sum1 and k<n3)
                {
                    sum3-=s3[k];
                    k++;
                }
                
            }
            else if(x==sum2)
            {
                // we will pop from stack 3 and stack1
                 while(sum1>sum2 and i<n1)
                {
                    sum1-=s1[i];
                    i++;
                }
                
                while(sum3>sum2 and k<n3)
                {
                    sum3-=s3[k];
                    k++;
                }
            }
            else if(x==sum3)
            {
                // we will pop from stack 1 and stack2
               
                 while(sum1>sum3 and i<n1)
                {
                    sum1-=s1[i];
                    i++;
                }
                
                while(sum2>sum3 and j<n2)
                {
                    sum2-=s2[j];
                    j++;
                }
            }
            
            if(sum1==sum2 and sum2==sum3)
             return sum1;
            
            if(i>=n1 or j>=n2 or k>=n3)
             return 0;
             
        }
        return sum1;
    }
};
