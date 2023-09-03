#include <stdio.h>

//Fórmula: s = s + 2^(n-1)

int main()
{
    unsigned long long int s = 0;

    for (char i = 1; i <= 64; i++) { //Testei com 4 e deu 15
        s += 1 << (i-1);
    }

    printf("Soma dos grãos: %llu\n", s); //Testei com 64 e deu 18 446 744 073 709 551 614

    return 0;
}