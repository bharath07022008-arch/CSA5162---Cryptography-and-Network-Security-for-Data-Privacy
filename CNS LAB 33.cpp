#include <stdio.h>

int main() {
    unsigned char plaintext = 65;
    unsigned char key = 25;

    unsigned char ciphertext = plaintext ^ key;
    unsigned char decrypted = ciphertext ^ key;

    printf("Plaintext = %d\n", plaintext);
    printf("Ciphertext = %d\n", ciphertext);
    printf("Decrypted = %d\n", decrypted);

    return 0;
}
