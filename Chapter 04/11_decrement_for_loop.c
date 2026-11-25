#include<stdio.h>

int main(){
    int n = 22;
    for(int i = n; i ; i--){
        printf("%d \n", i); 
    }
    return 0 ;
}

// any non-zero value means true
// When i becomes 0, the condition is checked before printing, so the loop stops and 0 is never printed.