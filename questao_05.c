#include <stdio.h>

int main()
{
    int maior = 0, menor = 0, n;
    puts("Insira um valor inteiro n:");
    scanf("%d", &n);
    maior = n;
    menor = n;
    while(n){ //Interromper se n for 0
        if (n > maior) {
            maior = n;
        }
        if (n < menor) {
            menor = n;
        }
        printf("O maior termo fornecido é %d e o menor é %d\n", maior, menor);
        puts("Insira um valor inteiro n:");
        scanf("%d", &n);
    }

    return 0;
}