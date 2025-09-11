//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int num, temp, sum = 0, digit, fact;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
