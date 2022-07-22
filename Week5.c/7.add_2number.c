int main() {    
    //Int
    int number1, number2, sum;
    
    //Enter int
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    //Display
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}