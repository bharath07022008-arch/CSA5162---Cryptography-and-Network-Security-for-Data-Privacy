#include <stdio.h>
#include <string.h>

int main() {
    char text[500];
    int frequency[26]={0};

    printf("Enter Cipher Text: ");
    scanf("%s", text);

    for(int i=0;text[i]!='\0';i++) {
        if(text[i]>='A' && text[i]<='Z')
            frequency[text[i]-'A']++;
    }

    printf("\nFrequency Table:\n");

    for(int i=0;i<26;i++)
        printf("%c -> %d\n",'A'+i,frequency[i]);

    return 0;
}
