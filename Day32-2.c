//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, maxDigit = 0, i;

    scanf("%lld", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}