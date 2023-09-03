#include <stdio.h>
#include <math.h>

//Lembrete para usar -lm quando for compilar

int main()
{
    unsigned short int x, y;
    unsigned char p = 0;
    puts("Insira um valor inteiro de 5 dígitos:");
    scanf("%hu", &x);
    y = x; //Backup do número original

    //Poderia ter simplesmente invertido o número e verificado se eram iguais
    for (char i = 4; i > 0; i -= 2) {
        if (x/(int)pow(10, i) == x % 10) {
            p++;
            x = (x - (x % 10)*pow(10, i))/10; //Tirar o primeiro e o último dígito
        }
    }

    //Nesse caso, se for um palíndromo o valor de p vai ser 2 (por serem 5 dígitos)
    printf("O número %hu %s\n", y, p > 1 ? "é um palíndromo" : "não é um palíndromo");


    //Rascunho do código
    
    /*
    if (x/10000 == x % 10) {
        x = (x - ((x % 10)*10000))/10; //Isso vai tirar o primeiro e o último dígito
        //printf("%hu\n", x);
        if (x/100 == x % 10) {
            printf("O número %hu é um palíndromo\n", y);
        } else {
            printf("O número %hu não é um palíndromo\n", y);
        }
    } else {
        printf("O número %hu não é um palíndromo\n", y);
    }
    */

    return 0;
}