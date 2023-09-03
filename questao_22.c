#include <stdio.h>

int main()
{
    int x, y;
    unsigned char c = 0;
    puts("Insira um número inteiro:");
    scanf("%d", &x);
    y = x; //Backup da variável

    while(x > 0) {
        if (x % 10 == 7) { //Pegar o último dígito
            c++;
        }
        x = x/10; //Remover o último dígito
    }

    printf("O número %d tem %hhu dígitos que são o algarismo 7\n", y, c);

    return 0;
}