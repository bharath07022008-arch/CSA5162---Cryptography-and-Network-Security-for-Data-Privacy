#include <stdio.h>
char mat[5][5] = {
{'M','F','H','I','K'},
{'U','N','O','P','Q'},
{'Z','V','W','X','Y'},
{'E','L','A','R','G'},
{'D','S','T','B','C'}
};
int main()
{
    printf("Playfair Matrix Loaded Successfully\n");
    printf("Encrypt using same row, same column and rectangle rules.\n");
    return 0;
}
