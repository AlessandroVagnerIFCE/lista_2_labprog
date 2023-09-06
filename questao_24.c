#include <stdio.h>
#include <math.h>

//Usar -lm quando compilar

int main()
{
    unsigned short int a = 1, b = 1, h = 1;

    for (a = 1; a <= 500; a++) {
        for (b = 1; b <= 500; b++) {
            for (h = 1; h <= 500; h++) {
                if (pow(a, 2) + pow(b, 2) == pow(h, 2)) {
                    printf("%hu² + %hu² = %hu²\n", a, b, h);
                }
            }
        }
    }

    return 0;
}