#include <stdio.h>

int main() {
    char text[100];
    int a = 5, b = 8;

    printf("Enter Plain Text: ");
    scanf("%s", text);

    printf("Cipher Text: ");

    for(int i=0;text[i]!='\0';i++) {
        int p = text[i]-'A';
        int c = (a*p+b)%26;
        printf("%c", c+'A');
    }

    return 0;
}
