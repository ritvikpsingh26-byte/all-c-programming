#include<stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer)

    float k = 5.6789;
    float* k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &k);

    printf("The value at address j is %d \n " , *(&i));
    return 0 ;
}
//int  *in_ptr; pointer to integer
// char *ch_ptr;  pointer to character
// float *fl_ptr; pointer to float  