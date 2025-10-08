//Q98: Print initials of a name with the surname displayed in full.  
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int len = strlen(name);
    int lastSpace = -1;
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }
    printf("%c.", name[0]);
    for (int i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }
    printf(" %s\n", name + lastSpace + 1);
    return 0;
}