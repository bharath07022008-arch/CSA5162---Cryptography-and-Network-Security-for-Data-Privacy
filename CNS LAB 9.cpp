#include <stdio.h>
#include <string.h>
int main()
{
    char cipher[200];
    printf("Enter Playfair ciphertext: ");
    gets(cipher);
    printf("\nPlayfair decryption requires\n");
    printf("1. Matrix generation\n");
    printf("2. Pair splitting\n");
    printf("3. Row/Column/Rectangle rules\n");
    printf("\nImplement same as Program 3 with reverse shifts.");
    return 0;
}
