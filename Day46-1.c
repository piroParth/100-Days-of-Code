//Q91: Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100];
    int i, j = 0;
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0';
    printf("%s", result);
    return 0;
}

