#include <stdio.h>

int main()
{
    unsigned char dia;
    puts("Insira um número no intervalo de 1 a 7:");
    scanf("%hhd", &dia);
    while(dia){ //Se for 0, ele interrompe o programa
        switch(dia){
            case 1:
                puts("Domingo");
                break;
            case 2:
                puts("Segunda");
                break;
            case 3:
                puts("Terça");
                break;
            case 4:
                puts("Quarta");
                break;
            case 5:
                puts("Quinta");
                break;
            case 6:
                puts("Sexta");
                break;
            case 7:
                puts("Sábado");
                break;
            default:
                puts("Número de dia não válido");   
        }
        puts("Insira um número no intervalo de 1 a 7:");
        scanf("%hhd", &dia);
    }

    return 0;
}