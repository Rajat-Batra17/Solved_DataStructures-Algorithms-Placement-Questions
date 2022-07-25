/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/


/*
Question:Job Sequencing Problem

Link:https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

Approach:

1. Sort the jobs in decreasing order of profit.

2. Now for each job---> consider its deadline --> and try to assign it to the very last slot before
deadline.

3. If it is possible to allot a slot to the job; then we can consider it else we can't

*/
bool cmp(Job a, Job b)
{
   return a.profit > b.profit;    //sorting in descending order
}
/*
If i write same function inside class then it should be static
*/
   
   
   
class Solution 
{
    public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        if(n==0)
         return {0,0}; // no of jobs 0 and profit also 0
        
        if(n==1)
         return {1,arr[0].profit}; // only 1 job present
         
         sort(arr, arr + n, cmp);
        
      
        vector<bool>slot(n,false);
        
        int jobs=0;
        int profit=0;
        for(int i=0;i<n;i++)
        {
            int x=arr[i].dead;// denotes deadlie
            for(int j=x-1;j>=0;j--)//allote the last available slot before deadline
            {
                if(slot[j]==false)
                {
                    slot[j]=true;
                    profit+=arr[i].profit;//denotes profit
                    jobs++;
                    break;
                }
            }
        }
        
        return {jobs,profit};
    }
    
    //0-1 1-2  3-4 . . . . .. .  . 
};


