#include <stdio.h>

int main()
{
    int a, b; //Nesse caso acho melhor usar int ao invés de char
    puts("Insira o valor de A:");
    scanf("%d", &a);
    puts("Insira o valor de B:");
    scanf("%d", &b);

    if (a > b) { //Caso a ordem seja invertida, usar isso para evitar erros
        a = a^b;
        b = a^b;
        a = a^b;
    }

    for (int i = a; i <= b; i++) { //0 também é múltiplo de 4
        if (!(i % 4)) {
            printf("%d² = %d\n", i, i*i);
        }
    }

    return 0;
}