#include <stdio.h>

//OBS: usar CTRL + C para interromper

int main()
{
    int n = 1;
    double pi = 0;

    while(1){
        pi += (double)4/n;
        printf("Pi = %lf\n", pi);
        n *= -1;
        if (n > 0) {
            n += 2;
        } else {
            n -= 2;
        }
    }

    return 0;
}