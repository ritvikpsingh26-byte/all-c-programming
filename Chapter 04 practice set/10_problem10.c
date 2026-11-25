#include<stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    }
    else {
        // Check divisibility from 2 to n-1
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a Prime Number.", n);
    else
        printf("%d is Not a Prime Number.", n);

    return 0;
}