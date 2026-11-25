#include<stdio.h>

int main(){
    int a = 4;
printf("%d %d %d \n", a, ++a, a++);
// 6 6 4
// 4 5 5
/*Understand the operators
a → simply uses the current value.
++a → pre-increment: first increases a, then uses it.
a++ → post-increment: first uses the current value, then increases a.*/
    return 0 ;
}