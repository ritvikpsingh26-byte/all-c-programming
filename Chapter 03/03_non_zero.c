#include<stdio.h>

int main(){
    if(1){
        printf("This if is executed !\n");
    }
    if(1234){
        printf("This if is also executed !\n");
    }
    if (264){
        printf("This if is also executed !\n");
    }
    if('c'){
        printf("This character inside if is also executed !\n");
    }
    if(0){
        printf("I am zero - i am not executing !\n");
    }
    return 0 ;
}