/*
Question: Activity Selection
Link: https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1/#
*/

class Solution
{
    public:
     
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>>v;
      
       if(n==0 or n==1)
        return n;
        
       for(int i=0;i<n;i++)
           v.push_back({end[i],start[i]});
       
       sort(v.begin(),v.end());//sorted on basis os findish time
       
       int ans=1;
       int finish=v[0].first;// current finish time
       int i=1;// first activity will always be included
       
       
       // Now an activity can only be taken if it;s start time is greater than current finish time
       // an dif we take an activity , we also have to update the current finish time
       while(i<n)
       {
           if(v[i].second>finish)
           {
               ans++;
               finish=v[i].first;
           }
           i++;
       }
       return ans;
       
       
    }
};
