#include<stdio.h>
// Function prototype
int sum(int , int);

// Function Defination
int sum(int x , int y){
    // printf("The sum is %d \n" , x+y);
    return x+y;
}

int main(){
    int a = 3;
    int b = 6;

    // int c = a + b ;
    // printf("The sum is %d" , c);
    int c = sum (a,b); // Function cell 
    printf("%d\n " , c);

    int a1 = 34;
    int b1 = 45;

    // int c1 = a1 + b1 ;
    // printf("%d \n " , c1);
    int c1 = sum(a1,b1); // Function call
    printf("%d\n", c1);

    int a2 = 66;
    int b2 = 44;

    // int c2 = a2 + b2 ;
    // printf("%d \n", c2);
    int c2 = sum(a2,b2); //Function call
    printf("%d\n",c2);
    return 0;
}  