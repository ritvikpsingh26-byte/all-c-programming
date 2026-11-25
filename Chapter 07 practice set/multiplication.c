#include<stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter columns of second matrix: ");
    scanf("%d", &c2);

    
    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];

    
    printf("\nEnter first matrix:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

        printf("\n The first matrix \n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            printf("%d\t",A[i][j]);
        }

        printf("\n");
    }
   
    printf("\nEnter second matrix:\n");

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

        printf("\n The second matrix \n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d\t",A[i][j]);
        }

        printf("\n");
    }
     for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("\nMultiplication of two matrices:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d\t", C[i][j]);
        }

        printf("\n");
    }

    return 0;
}