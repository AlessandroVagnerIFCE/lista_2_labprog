#include <stdio.h>

int main()
{
    char x = 5;
    printf("Valor inicial de x: %d\n", x);
    printf("++x - x++ = %d\n", ++x - x++);
    printf("Valor atual de x: %d\n", x);
    x = 5;
    puts("\nx agora foi revertido ao seu valor inicial\n");
    printf("x++ - ++x = %d\n", x++ - ++x);
    printf("Valor atual de x: %d\n", x);

    return 0;
}