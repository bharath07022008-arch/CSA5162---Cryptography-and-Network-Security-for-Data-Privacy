#include <stdio.h>

int main() {
    int plaintext, key, iv;
    int ciphertext, decrypted;

    printf("Enter Plaintext: ");
    scanf("%d",&plaintext);

    printf("Enter Key: ");
    scanf("%d",&key);

    printf("Enter IV: ");
    scanf("%d",&iv);

    ciphertext = (plaintext ^ iv) ^ key;
    decrypted = (ciphertext ^ key) ^ iv;

    printf("Ciphertext = %d\n", ciphertext);
    printf("Decrypted Text = %d\n", decrypted);

    return 0;
}
