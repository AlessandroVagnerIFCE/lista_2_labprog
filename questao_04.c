#include <stdio.h>

//José tem 150cm e cresce 2cm por ano
//Pedro tem 110cm e cresce 3cm por ano
//Em quantos anos Pedro será maior do que José?

int main()
{
    unsigned char p = 110, j = 150, anos = 0;

    while(p <= j){
        p += 3;
        j += 2;
        anos += 1;
    }

    //41 anos, é biologicamente impossível Pedro se tornar maior do que José
    printf("Pedro será maior do que José em %u anos\n", anos);

    return 0;
}