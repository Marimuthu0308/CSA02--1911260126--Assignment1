#include <stdio.h>

#define NORMAL_RATE 225
#define PEAK_RATE 270
#define FIXED_CHARGE 5000L

int main(void)
{
    int normal_units, peak_units;
    long normal_bill, peak_bill, total_bill;

    printf("Enter Normal Time Units: ");

    if (scanf("%d", &normal_units) != 1 || normal_units < 0)
    {
        printf("Invalid normal units!\n");
        return 1;
    }

    printf("Enter Peak Time Units: ");

    if (scanf("%d", &peak_units) != 1 || peak_units < 0)
    {
        printf("Invalid peak units!\n");
        return 1;
    }

    normal_bill = (long)normal_units * NORMAL_RATE;
    peak_bill = (long)peak_units * PEAK_RATE;

    total_bill = FIXED_CHARGE + normal_bill + peak_bill;

    printf("\n----- Smart Meter Bill -----\n");
    printf("Normal Units: %d\n", normal_units);
    printf("Peak Units: %d\n", peak_units);

    printf("Normal Charge: Rs %ld.%02ld\n",
           normal_bill / 100, normal_bill % 100);

    printf("Peak Charge: Rs %ld.%02ld\n",
           peak_bill / 100, peak_bill % 100);

    printf("Fixed Charge: Rs 50.00\n");

    printf("Total Bill: Rs %ld.%02ld\n",
           total_bill / 100, total_bill % 100);

    return 0;
}
