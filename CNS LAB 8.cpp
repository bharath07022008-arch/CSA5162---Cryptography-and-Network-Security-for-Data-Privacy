#include <stdio.h>
#include <string.h>
int main()
{
    char plain[100];
    char cipher[] = "CIPHERABDFGJKLMNOQSTUVWXYZ";
    int i;
    printf("Enter plaintext: ");
    scanf("%s", plain);
    printf("Ciphertext: ");
    for(i = 0; plain[i] != '\0'; i++)
	{
        if(plain[i] >= 'A' && plain[i] <= 'Z')
            printf("%c", cipher[plain[i]-'A']);
        else if(plain[i] >= 'a' && plain[i] <= 'z')
            printf("%c", cipher[plain[i]-'a']);
    }
    return 0;
}
