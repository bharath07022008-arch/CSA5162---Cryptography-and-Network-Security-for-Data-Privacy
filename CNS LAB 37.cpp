#include <stdio.h>
#include <string.h>

int main() {
    char cipher[500];
    int freq[26] = {0};

    printf("Enter Cipher Text: ");
    scanf("%s", cipher);

    for(int i=0; cipher[i]!='\0'; i++) {
        if(cipher[i]>='A' && cipher[i]<='Z')
            freq[cipher[i]-'A']++;
    }

    printf("\nFrequency Count:\n");

    for(int i=0;i<26;i++)
        printf("%c : %d\n", 'A'+i, freq[i]);

    return 0;
}
