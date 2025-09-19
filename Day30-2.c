//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, x, pos=0, neg=0, zero=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x>0) pos++;
        else if(x<0) neg++;
        else zero++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d",pos,neg,zero);
}
