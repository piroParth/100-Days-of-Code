//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, pos, num, i;
    
    scanf("%d", &n);
    int arr[100]; 
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &pos, &num);
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;
    n++;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
