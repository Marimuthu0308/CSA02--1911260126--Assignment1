#include <stdio.h>

/* Header guard demonstration */
#ifndef TASK05_H
#define TASK05_H

#define SLAB1_UNITS 100
#define SLAB2_UNITS 200

#define RATE1_PAISE 0
#define RATE2_PAISE 225
#define RATE3_PAISE 450

#define FIXED_CHARGE_PAISE 5000L

long compute_bill(int units);

#endif

/* Calculate electricity bill */
long compute_bill(int units)
{
    long paise = FIXED_CHARGE_PAISE;

#ifdef DEBUG
    printf("DEBUG: Calculating bill for %d units\n", units);
#endif

    if (units > SLAB2_UNITS)
    {
        paise += (units - SLAB2_UNITS) * RATE3_PAISE;
        paise += (SLAB2_UNITS - SLAB1_UNITS) * RATE2_PAISE;
    }
    else if (units > SLAB1_UNITS)
    {
        paise += (units - SLAB1_UNITS) * RATE2_PAISE;
    }

#ifdef DEBUG
    printf("DEBUG: Total amount = %ld paise\n", paise);
#endif

    return paise;
}

int main(void)
{
    int units;
    long bill;

    printf("Enter electricity units: ");

    if (scanf("%d", &units) != 1 || units < 0)
    {
        printf("Invalid input!\n");
        return 1;
    }

    bill = compute_bill(units);

    printf("Electricity Bill: Rs %ld.%02ld\n",
           bill / 100, bill % 100);

    return 0;
}
