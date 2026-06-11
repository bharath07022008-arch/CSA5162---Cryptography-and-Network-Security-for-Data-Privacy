#include <stdio.h>
#include <string.h>
int main() 
{
    char plain[100];
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int i;
    printf("Enter plaintext: ");
    gets(plain);
    printf("Ciphertext: ");
    for(i = 0; plain[i] != '\0'; i++) {
        if(plain[i] >= 'A' && plain[i] <= 'Z')
            printf("%c", key[plain[i] - 'A']);
        else if(plain[i] >= 'a' && plain[i] <= 'z')
            printf("%c", key[plain[i] - 'a']);
        else
            printf("%c", plain[i]);
    }
    return 0;
}
