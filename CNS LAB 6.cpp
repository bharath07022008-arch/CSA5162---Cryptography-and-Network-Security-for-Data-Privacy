#include <stdio.h>
int modInverse(int a) {
    int x;
    for(x = 1; x < 26; x++) {
        if((a * x) % 26 == 1)
            return x;
    }
    return -1;
}
int main() 
{
    char cipher[100];
    int a, b, a_inv, i;
    printf("Enter ciphertext: ");
    scanf("%s", cipher);
    printf("Enter key values a and b: ");
    scanf("%d%d", &a, &b);
    a_inv = modInverse(a);
    for(i = 0; cipher[i] != '\0'; i++) {
        cipher[i] =
        ((a_inv * ((cipher[i]-'A') - b + 26)) % 26) + 'A';
    }
    printf("Plaintext: %s", cipher);
    return 0;
}
