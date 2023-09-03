#include <stdio.h>

int main()
{
    unsigned short int f = 1, x = 0, y = 0; //Variável do resultado e duas auxiliares
    for (char i = 0; i < 20; i++) { //Nesse caso a condição é i < 20 pq começa do 0
        f = f + x;
        x = y;
        y = f;
        printf("%hu\n", f);
    }
    
    return 0;
}