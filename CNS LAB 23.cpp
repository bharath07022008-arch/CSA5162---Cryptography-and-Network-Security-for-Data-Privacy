#include <stdio.h>

int main() {
    int plaintext, key, counter;

    printf("Enter Plaintext: ");
    scanf("%d",&plaintext);

    printf("Enter Key: ");
    scanf("%d",&key);

    printf("Enter Counter: ");
    scanf("%d",&counter);

    int keystream = key ^ counter;
    int ciphertext = plaintext ^ keystream;
    int decrypted = ciphertext ^ keystream;

    printf("Ciphertext = %d\n", ciphertext);
    printf("Decrypted = %d\n", decrypted);

    return 0;
}
