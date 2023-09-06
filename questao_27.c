#include <stdio.h>

int main()
{
    int x = 0, maior, menor, k = 0;

    while(!((x < 0) && !(x % 2))){
        puts("Insira um valor inteiro:");
        scanf("%d", &x);
        if (!k) {
            maior = x;
            menor = x;
            k++;
        }
        //if ((x < 0) && !(x % 2)) {
            //break;
        //} else 
        if (x > maior) {
            maior = x;
        } else if (x < menor) {
            menor = x;
        }
        printf("%d * %d = %d\n", maior, menor, maior*menor);
    }

    return 0;
}