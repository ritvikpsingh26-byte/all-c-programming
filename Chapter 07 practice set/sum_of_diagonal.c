#include<stdio.h>

int main(){
    int rows , columns;
    int sum = 0;

    printf("Enter the  number of rows:");
    scanf("%d" , &rows);

    printf("Enter the number of columns:");
    scanf("%d" , &columns);

    int arr[rows][columns];

    printf("Enter the first matrix:");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d" , &arr[rows][columns]);
        }
        
    }

    printf("\n The first matrix \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t",arr[rows][columns]);
        }

        printf("\n");
    }
    
    printf("The sum of diagonal of matrix:");

        for(int i = 0; i < rows; i++)
    {
        sum = sum + arr[rows][rows];
    }

    printf("Sum of diagonal elements = %d", sum);
    return 0 ;
}