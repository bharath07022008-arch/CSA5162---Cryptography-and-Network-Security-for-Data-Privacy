#include <stdio.h>

int main() {
    int r = 15, s = 23;

    printf("DSA Signature Components\n");
    printf("r = %d\n", r);
    printf("s = %d\n", s);

    if(r > 0 && s > 0)
        printf("Valid Signature Format\n");
    else
        printf("Invalid Signature Format\n");

    return 0;
}
