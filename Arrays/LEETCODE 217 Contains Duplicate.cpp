
/*
QUESTION: LEETCODE: 217. Contains Duplicate
LINK:https://leetcode.com/problems/contains-duplicate/

APPROACH: created set from array; set only cotains unique element
if set size !=v ; means duplicate present and we do return true

*/

class Solution {
public:
    bool containsDuplicate(vector<int>& v) 
    {
        /*int n=v.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            if(s.find(v[i])!=s.end())
                return true;
            s.insert(v[i]);
        }
        return false;*/
        int n=v.size();
        unordered_set<int>s(v.begin(),v.end());
        if(s.size()!=n)
            return true;
        return false;
    }
};
