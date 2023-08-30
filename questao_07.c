#include <stdio.h>

int main()
{
    int a = 0, b = 1; //a é o dividendo, e b é o divisor
    while(1){ //Usado para repetir o código caso o divisor seja 0
        puts("Insira o valor do dividendo:");
        scanf("%d", &a);
        puts("Insira o valor do divisor:");
        scanf("%d", &b);
        if (b == 0) {
            puts("Expressão inválida (o divisor é igual a 0)");
            puts("Insira uma expressão válida");
            continue;
        }
        //Nesse caso preferi deixar as variáveis como inteiros
        //Mas poderia talvez mudar para float caso fosse necessário uma divisão de números quebrados
        printf("%d / %d = %.2f\n", a, b, (float)a/b);
        break;
    }

    return 0;
}