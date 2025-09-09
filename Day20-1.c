//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, digit;
    int product = 1;
    int hasOdd = 0; 

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 1) { 
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (hasOdd == 0) {
        product = 1;
    }
    printf("Product of odd digits: %d\n", product);
    return 0;
}