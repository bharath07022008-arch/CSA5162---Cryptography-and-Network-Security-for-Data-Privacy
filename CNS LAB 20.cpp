#include <stdio.h>

int main() {
    printf("ECB: Error affects only one block.\n");
    printf("CBC: Error affects current and next block.\n");
    return 0;
}
