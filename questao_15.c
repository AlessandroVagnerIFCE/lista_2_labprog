#include <stdio.h>
#include <math.h>

//OBS: Usar -lm quando compilar

int main()
{
    for (char i = 0; i <= 7; i++) {
        printf("3^(%hhd) = %d\n", i, (int)pow(3, i));
    }

    return 0;
}