#include <stdio.h>

//Função recursiva
//OBS: declarar essa função antes da linha onde ela é chamada
//Essa função pode retornar um valor muito grande (máximo 65!)
unsigned long int fatorial(unsigned long int x){
    if (x == 0){
        return 1;
    } else {
        return x*fatorial(x-1);
    }
}

//Poderia substituir a função recursiva por isso:
/*

int f, n;
scanf("%d", &n);

for (f = 1; n > 1; n--){
    f *= n;
}

*/


int main()
{
    unsigned int f;
    puts("Insira um número inteiro positivo F:");
    scanf("%u", &f);

    printf("%u! = %lu\n", f, fatorial(f));

    return 0;
}
