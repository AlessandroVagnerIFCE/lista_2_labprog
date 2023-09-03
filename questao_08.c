#include <stdio.h>

int main()
{
    float x, entrada;
    unsigned int p;
    puts("Insira o valor da mercadoria:");
    scanf("%f", &x);
    entrada = (int)x % 3 ? (int)x/3 + (int)x%3 : x/3;
    entrada += x - (int)x; //Adicionar as casas decimais perdidas na operação acima
    p = x/3;
    printf("R$: %.2f de entrada e duas parcelas de R$: %d.00\n", entrada, p);

    return 0;
}