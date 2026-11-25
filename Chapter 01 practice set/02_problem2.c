#include<stdio.h>

int main(){
    int r;
    int height;
    printf("enter your r");
    scanf("%f", &r);

    printf("enter your height");
    scanf("%f", &height);
    printf("The volume of cylinder with radius %d is %f\n", r , 3.14*r*r);
    printf("The volume of cylinder with radius %d and height %d is %f\n", r , height , 3.14*r*r*height);

    return 0 ;
}