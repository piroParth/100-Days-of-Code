//Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
if (n > 1) {
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
} else {
    isPrime = 0;  // for n <= 1
}
    if (isPrime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}