#include<stdio.h>

int main(){
    int rows , columns;

    printf("\n Enter number of rows");
    scanf("%d", &rows);

    printf("\n Enter number of columns");
    scanf("%d" , &columns);

    int A[rows][columns];
    int B[rows][columns];
    int C[rows][columns];

    printf("\n Enter the first matrix \n");

    for (int  i = 0; i < rows; i++)
    {
        for ( int j = 0; j < columns; j++)
        {
            scanf("%d" , &A[i][j]);
        }
    }
    printf("\n The first matrix \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t",A[i][j]);
        }

        printf("\n");
    }

    printf("\n Enter the second matrix \n");

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            scanf("%d" , &B[i][j]);
        }
    }
    printf(" \n The second matrix \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t", B[i][j]);
        }

        printf("\n");
    }

    printf("\n Enter the third matrix \n");

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
           C[i][j] = A[i][j] + B[i][j] ; 
        }
    }


    printf("\nAddition of A and B matrices:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t", C[i][j]);
        }

        printf("\n");
    }
    return 0 ;
}