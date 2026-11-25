#include<stdio.h>

int main(){
    int i = 6;
    int* j = &i;//j stores the address of i, while *j accesses the value of i
    int** k = &j;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));

    return 0 ;
}