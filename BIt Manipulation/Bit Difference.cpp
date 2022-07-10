/*
QUESTION lINK:
https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1#
*/

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
     // convert a to b
     
     int count=0;
     for(int i=0;i<32;i++)
     {
         int y=a&(1<<i); // considering bit by bit
         int z=b&(1<<i); 
         
         if(y!=z)
          count++;
     }
     return count;
        
    }
};
