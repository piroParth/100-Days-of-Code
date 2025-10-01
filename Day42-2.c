#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: ");
    scanf("%s", str);
    while (str[i] != '') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s
", str);
    return 0;
}