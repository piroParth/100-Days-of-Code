//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, x, even=0, odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        (x%2==0)? even++ : odd++;
    }
    printf("Even=%d, Odd=%d",even,odd);
}
