//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n, x;
    
    // Input size of array
    scanf("%d", &n);
    int arr[n];
    
    // Input elements (sorted)
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // Input x
    scanf("%d", &x);
    
    int low = 0, high = n - 1;
    int ceilIndex = -1;
    
    // Binary Search for Ceil
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] >= x) {
            ceilIndex = mid;   // Possible ceil found
            high = mid - 1;    // Check if there's a smaller one on the left
        } else {
            low = mid + 1;     // Go right
        }
    }
    
    printf("%d\n", ceilIndex);
    return 0;
}
