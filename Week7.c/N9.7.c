#include <stdio.h>
#include <math.h>

int main()
{
    /* Write the variable s= side of Square
    a,b,c are three side of triangle, semi = perimeter of triangle, area*/
    int number, s, a, b, c,semi, area;
   /* For enter number 1 or 2 to tell the program check the condition Square or triangle */
       printf("Enter a number:");
       scanf("%d",&number);
   /* Condition if user enter number1, the program will show Square and then ask user input s to find area */
   if(number ==1) {
       printf("Square \n");
       printf("Enter the values of s : ");
       scanf("%d" , &s);
    // formula area of square
    area = s * s;
       printf("Area of a Square = %d \n", area);
   }
   /* Condition if user enter number1, the program will show triangle and then ask user input a, b and c to find area */
   else if(number==2){
       printf("triangle \n");
       printf("Enter the values of a, b and c :\n ");
       scanf("%d %d %d", &a, &b, &c);
    //formula of semi perimeter and area of traingle
    semi = (a + b + c) / 2;
    area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
       printf("Area of a triangle = %d \n", area);
   }
   // if user enter the number beside 1 or 2 the program will show error
   else {
       printf("error");
   }
   
   return 0;
}