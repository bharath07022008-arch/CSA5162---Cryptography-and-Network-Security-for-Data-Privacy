#include <stdio.h>
#include <string.h>
int main()
{
    char plain[100];
    char map[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    int i;
    printf("Enter plaintext: ");
    gets(plain);
    printf("Ciphertext: ");
    for(i = 0; plain[i] != '\0'; i++) {
        if(plain[i] >= 'A' && plain[i] <= 'Z')
            printf("%c", map[plain[i]-'A']);
        else if(plain[i] >= 'a' && plain[i] <= 'z')
            printf("%c", map[plain[i]-'a']);
        else
            printf("%c", plain[i]);
    }
    return 0;
}
