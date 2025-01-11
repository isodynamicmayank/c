 /*
 PURPOSE:To learn about the concept of magic numbers and implement the same in c
 AUTHOR:AKASH SINHA
 DATE:2025-01-11
 OBJECTIVE:Find magical number
 PROBLEM STATEMENT:WRITE A PROGRAM IN C TO PRINT IF A NUMBER IS MAGICAL OR NOT
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
        int num ;
        printf("provide input integer");
        scanf("%d",&num);
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
