#include <stdio.h>
#include <string.h>

int main() {n
    char msg[100];
    int blockSize;

    printf("Enter Message: ");
    scanf("%s", msg);

    printf("Enter Block Size: ");
    scanf("%d", &blockSize);

    int len = strlen(msg);
    int pad = blockSize - (len % blockSize);

    for(int i=0;i<pad;i++)
        msg[len+i] = 'X';

    msg[len+pad] = '\0';

    printf("Padded Message: %s\n", msg);

    return 0;
}
