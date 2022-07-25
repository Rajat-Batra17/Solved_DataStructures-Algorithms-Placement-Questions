/*
QUESTION:Smallest number
LINK:https://practice.geeksforgeeks.org/problems/smallest-number5829/1

APPROACH:

1. digit can be any number between 0 and 9 ( both included )
2. first number can't be zero.
3. now each time , we are starting from MSB and we want minimum digit there;
   so we keep on checking what's the minimum digit we can put in over there;
   ; it's possible to generate such numbers if d*9 < sum; because we can not have a digit 
   greater that 9.

4. We are doing the same thing here also; we are checking each time whats the minimum digit we
can have at the MSB; becuase after placing a digit at MSB; our digit count reduces by 1 and our sum also
reduces by sum - digit_value;

*/
class Solution{   
public:
    string smallestNumber(int s, int d)
    {
        if((d*9)<s) // not possible to generate
         return "-1";
    
       string str; //empty string to be returned
       
       int temp=d;
       for(int i=0;i<temp;i++) // complete digit count
       {
           for(int j=0;j<=9;j++) // each digit can be between 0 and 9
           {
               if(i==0 and j==0) // first letter can't be 0;
                continue;
               
               if( (d-1)*9>=(s-j)) // if it is possible to have current digit at this place or not
               {
                   str.push_back(j+48); // because we want character
                   s=s-j; //sum reduced
                   d--; // digit count also reduced
                   break;
               }
                
           }
           
       }
       return str;
    }
};
