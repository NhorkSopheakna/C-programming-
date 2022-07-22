#include <stdio.h>

int main (){
    //Enter
    //amount of water
    int M, Ti, Tf, Q;
        printf("Type amount of water and press enter: \n");
        scanf("%d", &M);
        printf("Your amount of water is: %d kg \n", M);
    //amount of Initial Temperature
        printf("Type amount of Initial Temperature and press enter: \n");
        scanf("%d", &Ti);
        printf("Your amount of Temperature is: %d c \n", Ti);
    //amount of Final Temperature
        printf("Type amount of Final Temperature and press enter: \n");
        scanf("%d", &Tf);
        printf("Your amount of Final Temperature is: %d c \n", Tf);
    //Calculates
        Q = (M * (Tf - Ti) * 4184);
    //Display
        printf(" your energy is: %d J ", Q);
    return 0;
  }