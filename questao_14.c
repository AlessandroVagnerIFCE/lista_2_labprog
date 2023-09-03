#include <stdio.h>

int main()
{
    int a, b, c = 0;
    puts("Insira o valor de A:");
    scanf("%d", &a);
    puts("Insira o valor de B:");
    scanf("%d", &b);

    if (a > b) { //Ordem invertida
        a = a^b;
        b = a^b;
        a = a^b;
    }

    for (int i = a; i <= b; i++) {
        if (!(i % 3)) {
            c++;
        }
    }

    printf("Quantidade de números divisíveis por 3 entre %d e %d: %d\n", a, b, c);

    return 0;
}