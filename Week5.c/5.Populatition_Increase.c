#include <stdio.h>

int main(){
    int birth = ((3600/6) * 24)*365;
    int died = ((3600/15) * 24)*365;
    int immigrant = ((3600/45) * 24)*365;
    int result = (((birth + immigrant - died) * 5)+ 312032486);
    printf("%d population increase in 5 year.", result);
    return 0;
}