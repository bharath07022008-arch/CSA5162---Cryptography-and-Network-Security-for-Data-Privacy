#include <stdio.h>
#include <string.h>

int main() {
    char text[]="SENDMOREMONEY";
    int key[]={9,0,1,7,23,15,21,14,11,11,2,8,9};

    printf("Ciphertext: ");

    for(int i=0;i<strlen(text);i++) {
        int p=text[i]-'A';
        int c=(p+key[i])%26;
        printf("%c",c+'A');
    }
    return 0;
}
