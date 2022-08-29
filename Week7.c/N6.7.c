#include <stdio.h>

int main()
{
    //'write a program that accepts two integer numbers, then display [number 1] is less than/equal to greater than[number 2 ]
    // switch

    //show values of first Number and second Number
    int firstNumber, secondNumber;

    //for user enter values for first Number and second Number
    printf("Enter first Number\n");scanf("%d",&firstNumber);
    printf("Enter second Number\n");scanf("%d",&secondNumber);

    //first condition if first Number>second Number, it print values's first Number>second Number
    if(firstNumber>secondNumber){
        printf("%d < %d",secondNumber,firstNumber);
    }
    else{
    //Second condition if first Number<second Number, it print values's first Number<second Number
        if(firstNumber<secondNumber){
            printf("%d > %d",secondNumber,firstNumber);
        }
    //Third condition if first Number=second Number, it print values's first Number=second Number!
        else{
            printf("%d = %d",firstNumber,secondNumber);
        }
    }
    return 0;
}