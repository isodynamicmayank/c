/*
 PURPOSE:To learn about the concept of  armstrong numbers and implement the same in c
 AUTHOR:AKASH SINHA
 DATE:2025-01-11
 OBJECTIVE:Find whether a number is armstrong number or not
 PROBLEM STATEMENT:WRITE A PROGRAM IN C TO PRINT IF A NUMBER IS armstrong  OR NOT
 */

/* MAGIC NUMBER :A number is said to be armstrong number if sum of  each digit in a number  raised to power" the number of digits in that number" is equal to  the number itself
*/
#include<stdio.h>
#include<math.h>
int count_number_of_digits(int n)
{
    int count=0;
      while(n>0)
        {
            n=n/10;
            count++;
        }
        
    return count;
}
int main() {
    
    int n =1634;
    int temp=n;
    int count =count_number_of_digits(n);
    int newnum=0;
    while(n>0)
    {  int q=n%10;
        newnum=newnum +pow(q,count);
        n=n/10;
    }
     if(newnum ==temp)
     {
         printf("armstrong");
     }
     else
     {
         printf("not a armstrong");
     }
    return 0;
}