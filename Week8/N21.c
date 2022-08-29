#include<stdio.h>
 int main()
 {
     int i, j, sum; //Variable

     printf("Perfect numbers in the given range are: \n");

     for( i=1; i<=10000; i++) // Check number from 1 to 10000
     {
         sum=0;
         for( j=1; j<=i/2; j++) //j is depend on i
         {
             if(i%j==0)  //The remain from i /j equal 0
                 sum+=j; //sum=sum+j
         }
         if(i==sum) printf("%d\t",i); //The result will display when i=sum
     }

     return 0;
 }
