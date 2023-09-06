#include <stdio.h>
#include <math.h>

int main()
{
    //Talvez desse certo utilizar unsigned char e utilizar "i+1" no printf
    for (unsigned short int i = 1; i <= 256; i++) {
        printf("%hu = %o em octal = %x em hexadecimal\n", i, i, i);
        printf("%hu em binário: ", i);
        //Divisões sucessivas
        for (char k = 8; k >= 0; k--) {
            printf("%d",(i/(int)pow(2, k)) % 2);
        }
        puts("\n");
    }

    return 0;
}