
/*

QUESTION LINK:
https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1#

*/


class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
       int n=nums.size();
       // step1: finding xor of entire array
       int x=0;
       for(int i=0;i<n;i++)
         x=x^nums[i];
       
       /* Now our x have xor of two non repeating number
       and therefor a set bit in xor will be set in one non-repeating number
       and 0 in other non-repeating number; so based on this we will divide our array
       in 2 groups; taking in consideration the last bit of xor; then if we do xor of 
       first group, we get first non repeating number and by doing xor of second group we get
       2nd non repeating number*/
       
       int last_set_bit=x&(-x);// to get only last bit as set;
       
       vector<int>first; // element who have this bit as set
       vector<int>second;// element who have this bit as 0
       
       for(int i=0;i<n;i++)
       {
           if( (nums[i]&last_set_bit)!=0)
            first.push_back(nums[i]);
           else 
            second.push_back(nums[i]);
       }
       vector<int>ans;
       int y=0;
       
       for(int i=0;i<first.size();i++)
        y=y^first[i];
        
        ans.push_back(y);
        
        y=0;
        for(int i=0;i<second.size();i++)
           y=y^second[i];
           
         ans.push_back(y);
         
         sort(ans.begin(),ans.end());
         return ans;
           
    }
};
