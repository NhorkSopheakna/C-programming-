int main()
{  
    //Convert
  const float POUND = 2.20462;  
    float kg;  
  //Enter number
    printf("Enter weight in Kilograms\n");  
    scanf("%f", &kg);  
  //Display
    printf("Weight in Pounds is %f\n", (kg * POUND));  
  
    return 0;  
}