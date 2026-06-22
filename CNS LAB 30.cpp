#include <stdio.h>

int main() {
    int X,T;

    printf("Enter Message Block X: ");
    scanf("%d",&X);

    T = X ^ 123;

    printf("CBC-MAC Tag = %d\n",T);
    printf("Second Block = X XOR T = %d\n",X^T);

    return 0;
}
