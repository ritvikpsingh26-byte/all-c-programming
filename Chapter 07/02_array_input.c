#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter marks of 5 students\n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);
    // printf("Marks 0 and Marks 1 is %d %d", marks[0],marks[1]);

    for (int i = 0; i < 5 ; i++)
    {
        scanf("%d", &marks[i]);                              //1st loop → PUT values INTO array
     
    for (int i = 0; i < 5 ; i++) // 2nd loop → TAKE values OUT of array (to display)
    {
        printf("The value of marks at index %d is %d\n",i, marks[i]);

    }
    }
       return 0 ;
}

// we also used this 
/*
for (int i = 0; i < 5; i++)
{
    scanf("%d", &marks[i]);
    printf("%d\n", marks[i]);
}
    */