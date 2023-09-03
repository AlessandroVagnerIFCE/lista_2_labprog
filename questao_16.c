#include <stdio.h>

int main()
{
    unsigned int s3 = 0, s5 = 0;

    for (unsigned char i = 0; i <= 200; i++) {
        if ((i <= 100) && !(i % 3)) {
            s3 += i;
        }
        if ((i >= 100) && !(i % 5)) { //Poderia usar else if, mas o intervalo em cima ficaria [0, 99]
            s5 += i;
        }
    }

    printf("Somatório dos números divisíveis por 3 no intervalo [0, 100]: %d\n", s3);
    printf("Somatório dos números divisíveis por 5 no intervalo [100, 200]: %d\n", s5);

    return 0;
}