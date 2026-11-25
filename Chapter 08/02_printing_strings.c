#include<stdio.h>

int main(){
    // char st[] = {'a','b','c','d','\0'};
    char st[] = "abc";// same as doing char st[] = {'a','b','c','d','\0'};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("The character is %c\n" , st[i]);
    // }
    printf("%s" , st);
    return 0 ;
}