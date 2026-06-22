#include <stdio.h>

int main() {
    int pt, key, iv;

    printf("Enter Plaintext: ");
    scanf("%d",&pt);

    printf("Enter Key: ");
    scanf("%d",&key);

    printf("Enter IV: ");
    scanf("%d",&iv);

    int ct=(pt^iv)^key;

    printf("Ciphertext=%d\n",ct);

    return 0;
}
