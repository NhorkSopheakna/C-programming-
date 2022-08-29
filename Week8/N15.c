
#include <stdio.h>

int main(){
    
    int computer_num,usernum;
    computer_num = 50;
    // 
    while(1){
      
        printf("Enter your guess : ");
        scanf("%d",&usernum);

        if (computer_num != usernum){
            printf("have another guess");
      
        // 
        }else if(computer_num == usernum){
            printf("Well done, you took [count] attempts %d",usernum);  
    }

    return 0;
}