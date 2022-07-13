/*
Question: Leetcode 91 Decode Ways
Link: https://leetcode.com/problems/decode-ways/

APPROACH: Let dp[i] denotes maximum ways if we have elements till i index only

1. Each element can be used in 2 ways either alone or with previous element
2. Firsly we check if element not equal to 0; means can be used alone
 therefore dp[i]+=dp[i-1];
3. now we check if it can be used with previous elemnt or not; We check it by checking if i-1 th element is 1
or if (i-1)th element is 2 and ith elemet is less than 6; in such case we add dp[i]+=dp[i-2];
4. if some element can not be used in any of the above two ways; means not even a signle combination is possible
hence we return 0;

5. we have converted string to vector int for our ease of use by subtraction '0' from each character
*/

class Solution {
public:
    int numDecodings(string s) 
    {
     
     int n=s.size();
     if(n==0)              // no element is there in the array
          return 0;
      
     if(s[0]=='0')           //   first zero can't be combined with anyone
         return 0;
     
     vector<int>nums(n+1);
     for(int i=1;i<=n;i++)
         nums[i]=s[i-1]-'0'; 
                           // till here we have converted our string character to integer for ease;
                          // indexing done 1 based don;t forget
        
      vector<int>dp(n+1,1);
      // one based indexing
          
      for(int i=2;i<=n;i++)
      {
           dp[i]=0;
            if(nums[i]!=0) 
                dp[i]=dp[i-1]; //can be used as single element
            
            if(nums[i-1]==1 or (nums[i-1]==2 and nums[i]<=6))// can also be used in combo with previous element
                dp[i]+=dp[i-2];
          
             if(dp[i]==0) // can't be used in any of the above ways therefore won't allow any code to be formed.
                return 0;
      }
        return dp[n];
      
        
    }
};
