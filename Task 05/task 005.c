#include <stdio.h>

#define RATE_PAISE 230

void calculate_bill(int units);

void calculate_bill(int units)
{
    int bill = units * RATE_PAISE;

#ifdef DEBUG
    printf("DEBUG: Units = %d\n", units);
    printf("DEBUG: Bill in paise = %d\n", bill);
#endif

    printf("Total bill = Rs. %.2f\n", bill / 100.0);
}

int main(void)
{
    int units = 100;

    calculate_bill(units);

    return 0;
}
