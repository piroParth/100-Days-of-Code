//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp>cp) {
        percentage = ((sp-cp)/cp) * 100;
        printf("Profit %.2f%%\n", percentage);
    }
    else if (sp<cp) {
        percentage = ((cp-sp)/cp) * 100;
        printf("Loss %.2f%%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

