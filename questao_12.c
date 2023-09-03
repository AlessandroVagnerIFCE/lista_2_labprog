#include <stdio.h>

int main()
{
    int x;
    puts("Insira um número inteiro para obter a tabuada:");
    scanf("%d", &x);

    for (char i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", x, i, x*i);
    }

    return 0;
}