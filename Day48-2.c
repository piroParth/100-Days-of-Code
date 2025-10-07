//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverse(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[200];
    int i, start = 0, len;
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    len = strlen(str);
    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    printf("%s", str);
    return 0;
}
