#include <stdio.h>

int main()
{
    int a, b, s = 0;
    puts("Insira o valor de A:");
    scanf("%d", &a);
    puts("Insira o valor de B:");
    scanf("%d", &b);

    if (a > b) { //Evitar erros quando a ordem for invertida
        a = a^b;
        b = a^b;
        a = a^b;
    }

    for (int i = a; i <= b; i++) {
        if (!(i % 2)) {
            s += i;
        }
    }

    printf("Somatório de todos os números pares entre %d e %d: %d\n", a, b, s);

    return 0;
}