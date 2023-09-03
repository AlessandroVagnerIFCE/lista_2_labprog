#include <stdio.h>

int main()
{
    int a, b, c = 0, m = 0;
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
            m += i;
            c++; //Variável auxiliar para realizar a divisão, serve para evitar erros
    }

    printf("Média dos números entre %d e %d: %.2f\n", a, b, (float)m/c);

    return 0;
}