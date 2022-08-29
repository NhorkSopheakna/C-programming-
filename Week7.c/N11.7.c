#include <stdio.h>

int main(){

    /*Write a program that prompts the user to enter values for a, b, and c
    and displays the result based on the discriminant.
    If the discriminant is positive, display two roots.
    If the discriminant is 0, display one
    root. Otherwise, display �The equation has no real roots�.*/

    /*show values for Identify the values of a, b, and c in the standard form of the equation ax^2 + bx +c= 0
    , delta and roots */
    int a, b, c, delta, x, x1, x2;
    //for user enter values for a, b, and c
     printf("Enter values for a\n");
     scanf("%d",&a);
     printf("Enter values for b\n");
     scanf("%d",&b);
     printf("Enter values for c\n");
     scanf("%d",&c);

     //display form of the equation
     printf("f(x)=%dX^2 + %dX + %d=0",a, b, c);

     //calculate delta using recipe delta = (b*b)-(4*a*c) and display values of delta
     delta = (b*b)-(4*a*c);
     printf("\n delta=%d",delta);

     //first condition if delta<0 ,it is print The equation has no real roots.
     if(delta<0){
        printf("\n The equation has no real roots");
     }
        else{
     //Second condition if delta=0 ,it is print The equation has one root and display values of root using recipe x=(-b/2.0*a) .
            if(delta==0){
                printf("\n one root");
                x=(-b/2.0*a);
                printf("\n x=%d",x);
            }
     /*Third condition if delta=0 ,it is print The equation has two root and
     display values of root using recipe X1=((-b+sqrt(delta))/2*a) and  X2=((-b-sqrt(delta))/2*a).*/
                else{
                    printf("\n two root");
                    x1=((-b+sqrt(delta))/2*a);
                    x2=((-b-sqrt(delta))/2*a);
                    printf("\n X1=%d and X2=%d",x1,x2);
                }
        }
    return 0;
}