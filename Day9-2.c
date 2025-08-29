//Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main() {
    float per;
    printf("Enter percentage: ");
    scanf("%f", &per);
        if (per >= 90.0) {
        printf("Grade A\n");
    }
        else if (per >= 80.0) {
        printf("Grade B\n");
    }
        else if (per >= 70.0) {
        printf("Grade C\n");
    }
        else if (per >= 60.0) {
        printf("Grade D\n");
    }
        else {
        printf("Grade F\n");
    }

    return 0;
}
