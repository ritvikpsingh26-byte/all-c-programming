#include<stdio.h>

int main(){
    int i = 72;
    int*j = &i; // j is a pointer pointing to i 
    int k = 67;
    printf("The address of i is %p\n",&i); //%p → pointer/address  // %u → prints an unsigned int (0 and positive values).
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",&k); // &k --> address of k

    printf("The value at address j is %d \n " , *(&i));
    return 0 ;
}   
/*

a → value stored in the variable → 10
&a → address where a is stored in memory

*/
// ----------------------------------------------------------------------------------------------------
/*
int *j => j stores the address of an integer variable.
*j means “the value stored at the address that j is pointing to.”
*/
// -----------------------------------------------------------------------------------------------------
/*
*(&i)
 ↓
take the address of i
 ↓
go to that address
 ↓
get the value
*/ 
// ------------------------------------------------------------------------------------------------------