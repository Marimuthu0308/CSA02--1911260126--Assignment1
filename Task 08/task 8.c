
#include <stdio.h>

#define RATE 230

int main(void)
{
    int units = 100;
    int bill = units * RATE;

    printf("Units: %d\n", units);
    printf("Bill: Rs %d\n", bill);

    return 0;
}

