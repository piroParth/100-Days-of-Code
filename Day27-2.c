Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */
#include <stdio.h>
int main() {
    int i, j, n = 4;

    for(i = 1; i <= 2*n - 1; i++) {
        int row = i <= n ? i : 2*n - i; 
        for(j = 1; j <= n - row; j++)
            printf(" ");
        for(j = 1; j <= 2*row - 1; j++)
            printf("*");
    printf("\n");
    }
    return 0;
}