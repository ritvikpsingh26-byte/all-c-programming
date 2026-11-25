#include<stdio.h>
#include<limits.h>

int main(){
    int n;

    printf("Enter the size of array");
    scanf("%d" , &n);

    int arr[n];

    printf("Enter the array element\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    int largest  = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest ;
            largest = arr[i] ; 
        }
        else if (arr[i] > secondlargest && arr[i] < largest) 
        {
            secondlargest = arr[i];
        }
    }
        if (secondlargest == INT_MIN) {
        printf("Second largest element does not exist.");
    }
    else {
        printf("Second largest element = %d", secondlargest);
    }
    return 0 ;
}