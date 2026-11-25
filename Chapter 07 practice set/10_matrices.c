#include<stdio.h>

int main(){
    int rows , columns ;

    printf("\n Enter the number of rows");
    scanf("%d", &rows);

    printf("\n Enter the number of columns");
    scanf("%d" , &columns);

    int arr[rows][columns];

    printf("\n Enter the elements of matrix:\n");

    for(int i = 0 ; i < rows ; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\n Enter the element [%d][%d]: ", i, j);
            scanf("%d" , &arr[i][j]);   
        }
    }
     printf("\nThe Matrix is:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }    
    
    return 0 ;
}