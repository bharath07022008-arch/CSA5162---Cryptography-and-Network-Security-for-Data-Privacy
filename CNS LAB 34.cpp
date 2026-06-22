#include <stdio.h>
#include <string.h>

int main() {
    char msg[100];

    printf("Enter Message: ");
    scanf("%s", msg);

    int len = strlen(msg);
    int block = 8;

    while(len % block != 0) {
        msg[len] = 'X';
        len++;
    }

    msg[len] = '\0';

    printf("After Padding: %s\n", msg);

    return 0;
}
