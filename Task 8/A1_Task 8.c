#include <stdio.h>

#define RATE 225

int main(void)
{
    int units = 150;
    int bill;

    bill = units * RATE;

    printf("Electricity Units: %d\n", units);
    printf("Rate: %d paise\n", RATE);
    printf("Total Amount: %d paise\n", bill);

    return 0;
}
