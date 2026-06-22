#include <stdio.h>
#include <string.h>

int main() {
    char plain[100], key[100];

    printf("Enter Plain Text (CAPITALS): ");
    scanf("%s", plain);

    printf("Enter Key (same length): ");
    scanf("%s", key);

    printf("Cipher Text: ");

    for(int i = 0; plain[i] != '\0'; i++) {
        char c = ((plain[i]-'A') + (key[i]-'A')) % 26 + 'A';
        printf("%c", c);
    }

    return 0;
}
