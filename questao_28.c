#include <stdio.h>

int main()
{
    unsigned char x, y;
    puts("Insira o valor de X:");
    scanf("%hhu", &x);
    puts("Insira o valor de Y:");
    scanf("%hhu", &y);

    if (y < 5) {
        puts("Valor de Y inválido");
    }

    //O deslocamento de bit em (y - i) força o LSB a ser 0
    //Na hora de verificar o resultado, considerar um número par como 0 e ímpar como 1
    //Onde o print mais acima é o LSB
    for (char i = 1; i <= 4; i++) {
        printf("%hhu\n", (((y - i) >> 1) << 1) | x % 2);
        x = x >> 1;
    }

    for (char k = 1; k <= 4; k++) {
        printf("%hhu\n", (((y + k) >> 1) << 1) | x % 2);
        x = x >> 1;
    }

    return 0;
}