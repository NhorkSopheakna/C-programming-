 #include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // If they enter a number that is 20 or more
    if  (num >= 20) {
        printf("%d is Too high.",num);
    }
    else {
        printf("%d is Thank you.",num);
    }

    return 0;
}