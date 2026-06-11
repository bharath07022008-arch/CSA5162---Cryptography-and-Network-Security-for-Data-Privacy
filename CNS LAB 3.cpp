#include <stdio.h>
#include <string.h>
#include <ctype.h>
char matrix[5][5] = {
    {'M','O','N','A','R'},
    {'C','H','Y','B','D'},
    {'E','F','G','I','K'},
    {'L','P','Q','S','T'},
    {'U','V','W','X','Z'}
};
void findPos(char ch, int *row, int *col) 
{
    int i, j;
    if(ch == 'J') ch = 'I';
    for(i = 0; i < 5; i++)
	{
        for(j = 0; j < 5; j++)
		{
            if(matrix[i][j] == ch)
			{
                *row = i;
                *col = j;
            }
        }
    }
}
int main() 
{
    char text[100];
    int r1, c1, r2, c2, i;
    printf("Enter plaintext (even letters): ");
    scanf("%s", text);
    printf("Ciphertext: ");
    for(i = 0; text[i]; i += 2)
	{
        findPos(toupper(text[i]), &r1, &c1);
        findPos(toupper(text[i+1]), &r2, &c2);
        if(r1 == r2) 
		{
            printf("%c%c",
                matrix[r1][(c1+1)%5],
                matrix[r2][(c2+1)%5]);
        }
        else if(c1 == c2)
		{
            printf("%c%c",
                matrix[(r1+1)%5][c1],
                matrix[(r2+1)%5][c2]);
        }
        else
		{
            printf("%c%c",
                matrix[r1][c2],
                matrix[r2][c1]);
        }
    }
    return 0;
}
