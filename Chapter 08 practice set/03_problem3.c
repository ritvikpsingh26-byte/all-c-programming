#include<stdio.h>
int strlen(char str[]){
    int i =0 , count;
    char  c = str[i];
    while(c!='\0'){
        c = str[i];
        i++;
    }
    count = i-1 ;
    return count;
}
int main(){
    char str[] = "RITIVK";
    printf("%d", strlen(str));
    return 0 ;
}