#include <stdio.h>

int main()
{
    for (char i = 15; i <= 90; i++) {
        if (!(i % 4)) {
            printf("%hhd² = %d\n", i, i*i);
        }
    }

    return 0;
}