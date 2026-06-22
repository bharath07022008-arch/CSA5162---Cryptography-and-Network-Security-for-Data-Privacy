#include <stdio.h>
#include <string.h>

int main() {
    char text[500];
    int freq[26]={0};

    printf("Enter Cipher Text: ");
    scanf("%s",text);

    for(int i=0;text[i];i++)
        freq[text[i]-'A']++;

    for(int i=0;i<26;i++)
        printf("%c : %d\n",'A'+i,freq[i]);

    return 0;
}
