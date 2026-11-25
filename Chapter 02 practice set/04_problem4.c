#include<stdio.h>

int main(){
    //  Explain the step by step evaluation of 3*x/y - z+k, where x = 2, y = 3 , z = 3 , k = 1
    int x = 2 ; 
    int y = 3 ;
    int z = 3 ;
    int k = 1 ;
    float e = 3*x/y - z+k ;
    // 3*x/y - z+k
    // 6/3 - z + k
    // 2 - z + k
    // -1 + k
    // -1 + 1
    // 0
    printf("The value of e is %f", e );
    return 0 ;
}