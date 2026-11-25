#include<stdio.h>

int factorial(int);


int factorial(int n ){
    if(n == 1 || n == 0){
        return 1;
    }
    // factorial(n) = factorial(n-1) X n
    return factorial(n-1)*n;
}
int main(){
    int a = 9;
    printf("The factorial of %d is %d" , a, factorial (a));
    return 0 ;
}
/*But 50! is enormous:

50! = 30414093201713378043612608166064768844377641568960512000000000000

A normal int can only store approximately:

-2.1 billion to +2.1 billion

So integer overflow will happen.*/

/*Let's take factorial(5)

The function works like this:

factorial(5)
     ↓
factorial(4) × 5
     ↓
factorial(3) × 4 × 5
     ↓
factorial(2) × 3 × 4 × 5
     ↓
factorial(1) × 2 × 3 × 4 × 5
     ↓
1 × 2 × 3 × 4 × 5
     ↓
120*/
//-----------------------------------------------------------------------------------------------------
/*
Simple real-life example

Imagine you are looking for a file inside folders:

Folder 1
   ↓
Folder 2
   ↓
Folder 3
   ↓
Folder 4
   ↓
File found → STOP*/