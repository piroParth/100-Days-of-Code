//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int k = 0; k < m + n - 1; k++) {
        for (int i = 0; i < m; i++) {
            int j = k - i;
            if (j >= 0 && j < n) {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}