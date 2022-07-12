/*
LEETCODE 53 Maximum Subarray
LINK:https://leetcode.com/problems/maximum-subarray/

APPROACH:
Keep going till your sum is positive; once sum gets negative update sum to 0
and then repeat
*/

class Solution {
public:
    int maxSubArray(vector<int>& v)
    {
        int n=v.size();
        
        if(n==0)
            return 0;
        if(n==1)
            return v[0];
        
        
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum+=v[i];
            if(sum<0)
                sum=0;            }
            else
               v[i]=sum;

        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
            ans=max(ans,v[i]);
        return ans;
    }
};
