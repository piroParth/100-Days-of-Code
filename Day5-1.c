//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time, simpleInterest, compoundInterest, amount;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output results
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}

