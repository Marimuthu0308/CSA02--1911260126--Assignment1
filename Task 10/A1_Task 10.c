#include <stdio.h>
#include <limits.h>

int main(void)
{
    int units = 150;
    int rate = 225;

    float float_bill;
    long long paise_bill;

    float_bill = (float)units * rate / 100;
    paise_bill = (long long)units * rate;

    printf("Electricity Units: %d\n", units);
    printf("Rate: %d paise\n", rate);

    printf("\nUsing Float:\n");
    printf("Bill = Rs %.2f\n", float_bill);

    printf("\nUsing Integer Paise:\n");
    printf("Bill = Rs %lld.%02lld\n",
           paise_bill / 100, paise_bill % 100);

    printf("\nInteger Range: %d to %d\n", INT_MIN, INT_MAX);

    return 0;
}
