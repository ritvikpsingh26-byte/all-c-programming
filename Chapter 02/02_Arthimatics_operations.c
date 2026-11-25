#include<stdio.h>

int main(){
    int a = 4 ;
    int b = 5 ;
    int c = a + b ;
    printf("The value of a is %d and the value of b is %d and the sum is %d" , a, b, c) ;
    // modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n" , a%b);
    //  This is not work on rthe exponentiation in c
    // int d = a^b 
    return 0 ;
}