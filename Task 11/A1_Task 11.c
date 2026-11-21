#include <stdio.h>

#define FIXED_CHARGE 5000L
#define RATE2 225
#define RATE3 450

long calculate_bill(int units)
{
    long bill = FIXED_CHARGE;

    if (units < 0)
        return -1;

    if (units > 200)
    {
        bill += 100L * RATE2;
        bill += (long)(units - 200) * RATE3;
    }
    else if (units > 100)
    {
        bill += (long)(units - 100) * RATE2;
    }

    return bill;
}

int main(void)
{
    int units;
    long bill;

    printf("Enter electricity units: ");

    if (scanf("%d", &units) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    bill = calculate_bill(units);

    if (bill < 0)
    {
        printf("Units cannot be negative!\n");
        return 1;
    }

    printf("\n----- Final Billing Design -----\n");
    printf("Units: %d\n", units);
    printf("Bill: Rs %ld.%02ld\n",
           bill / 100, bill % 100);

    printf("\nDesign Features:\n");
    printf("1. Integer paise calculation\n");
    printf("2. Separate tariff constants\n");
    printf("3. Input validation\n");
    printf("4. Slab-based calculation\n");

    return 0;
}
