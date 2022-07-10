/*
QUESTION LINK:
https://practice.geeksforgeeks.org/problems/power-set4302/1#
*/
class Solution{
	public:
		vector<string> AllPossibleStrings(string s)
		{
		   int n=s.length();
		   int x=(1<<n); // 2^n
		   x--;
		   
		   vector<string>ans;
		   for(int num=1;num<=x;num++)
		   {
		       string str="";
		       for(int i=0;i<n;i++)
		       {
		           int bit=(1<<i)&num; // to find if ith bit set or not
		           if(bit)
		            str=str+s[i];
		       }
		       ans.push_back(str);
		   }
		   sort(ans.begin(),ans.end());
		   return ans;
		}
};

