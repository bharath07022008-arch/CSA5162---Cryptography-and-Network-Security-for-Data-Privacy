#include <stdio.h>
#include <string.h>
int main() {
    int key[2][2]={{9,4},{5,7}};
    char msg[100];
    int i;
    printf("Enter plaintext (even length): ");
    scanf("%s",msg);
    printf("Ciphertext: ");
    for(i=0;i<strlen(msg);i+=2){
        int a=msg[i]-'a';
        int b=msg[i+1]-'a';
        int c1=(key[0][0]*a+key[0][1]*b)%26;
        int c2=(key[1][0]*a+key[1][1]*b)%26;
        printf("%c%c",c1+'A',c2+'A');
    }
    return 0;
}
