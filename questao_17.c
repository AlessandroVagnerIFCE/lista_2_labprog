#include <stdio.h>

int main()
{
    //F = (C * 9/5) + 32

    for (int c = 10; c <= 100; c += 10) {
        printf("%d°C = %.2f°F\n", c, (c*(float)9/5)+32);
    }

    return 0;
}