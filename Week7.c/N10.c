// N10
#include <stdio.h>

int main()
 {
    /* Variable : 
    W is weight in kilograms
    BMI is is a measure of health based on weight
    H is height in meters
    */
    float BMI, W, H ;
    // For enter value weight and height
         printf("enter the number of weight :  ");
         scanf ( "%f", &W );
         printf("enter the number of Height :  ");
         scanf ( "%f", &H );
    // Formula of BMI
    BMI = W / (H*H)  ;
    // Result is depend on the following condition
    if (BMI < 18.5)
    {
         printf("Interpretation : Underweight");
    }
    else if (BMI <= 24.5)
    {
         printf("Interpretation : Normal");
    }  
    else if (BMI <= 29.9)
    {
         printf("Interpretation : Overweight");
    }  
    else if (BMI>=30)
    {
         printf("Interpretation : Obese");
    }  

    return 0;
}