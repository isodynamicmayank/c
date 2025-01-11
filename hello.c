 /*
 PURPOSE:To learn about the concept of magic numbers and implemnet same in c
 AUTHOR:AKASH SINHA
 DATE:2025-01-10
 OBJECTIVE:Find all magical numbers between 1 to 100
 PROBLEM STATEMENT:WRITE A PROGRAM IN C TO PRINT MAGIC NUMBERS FROM 1-100
 */

/* MAGIC NUMBER :A number is said to be magical number if the sum of digit is equal to "1",for example-163  -> 1+6+3->10->1+0->1
*/

#include <stdio.h>
int sum_of_digits(int n)
{    int sum =0;
  while(n>0)
  {
    sum=sum+n%10;
    n=n/10;}
    return sum;
}  
  int main() 
  {
        int num =64;
        int summation =0;
        
        summation =sum_of_digits(num);
        if(summation>9)
        {
            summation= sum_of_digits(summation);
            
        }
        if(summation==1)
        {
            printf("magic number");
        }
        else
        {
            printf("not a magic number");
        }
        return 0;
    
    
}