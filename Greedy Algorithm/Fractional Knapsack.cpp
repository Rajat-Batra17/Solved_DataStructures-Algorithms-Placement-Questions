/*
struct Item{
    int value;
    int weight;
};
*/

/*

Question: Fractional Knapsack

Link: https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

Approach:

1. Sort items on basis of value/ weight
2. By doing this we do get value per unit weight.
3. Typecasting to double is most important; else you will not get the correct answer.
4.  Each item can be considered only once. 
5. if you can't consider a item fully then do consider it partially by doing
 (value/ weight)*capacity.

*/

class Solution
{
    public:
    
    static bool cmp(Item a , Item b)
    {
        double d1= (double)( (double)a.value/(double)a.weight );
        double d2= (double)( (double)b.value/(double)b.weight );
        return d1>d2; // sorting on basis of decreasing order of weigth
    }
   
   
    double fractionalKnapsack(int capacity, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        
        double profit=0;
        for(int i=0;i<n;i++)
        {
            if( (capacity-arr[i].weight)>=0)// we can consider this item completely
            {
                profit+=arr[i].value;
                capacity=capacity-arr[i].weight;
            }
            else // we can consider part of the item
            {
               profit+= (double)( (double)((double)arr[i].value*(double)capacity) /(double)arr[i].weight);
               return profit;
            }
            
        }
        return profit;
    }
        
};

