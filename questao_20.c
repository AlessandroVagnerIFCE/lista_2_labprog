#include <stdio.h>

int main()
{
    unsigned int f, n;

    for (char i = 1; i <= 10; i++) {
        if (i % 2) {
            n = i;
            for (f = 1; n > 1; n--) {
                f *= n;
            }
            printf("%hhu! = %u\n", i, f);
        }
    }

    return 0;
}