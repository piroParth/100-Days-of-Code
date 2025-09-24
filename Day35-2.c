//Rotate an array to the right by k positions.
#include <stdio.h>
int main() {
    int n, k, i;
    scanf("%d", &n);        
    int arr[n], result[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);   
    scanf("%d", &k);            
    k = k % n;                  
    for (i = 0; i < n; i++) {
        int newPos = (i + k) % n;  
        result[newPos] = arr[i];
    }
    for (i = 0; i < n; i++)
        printf("%d ", result[i]);
    return 0;
}
