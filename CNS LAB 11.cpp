#include <stdio.h>
#include <math.h>
int main() {
    double keys = 1;
    for(int i = 25; i >= 1; i--)
        keys *= i;

    printf("Approximate Key Space = %.0e\n", keys);
    return 0;
}
