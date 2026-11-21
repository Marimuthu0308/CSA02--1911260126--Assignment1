#include <stdio.h>

#define RATE1 0
#define RATE2 225
#define RATE3 450
#define FIXED_CHARGE 5000L

long calculate_bill(int units)
{
    long bill = FIXED_CHARGE;

    if (units <= 100)
    {
        bill += units * RATE1;
    }
    else if (units <= 200)
    {
        bill += 100 * RATE2;
        bill += (units - 100) * RATE2;
    }
    else
    {
        bill += 100 * RATE2;
        bill += 100 * RATE2;
        bill += (units - 200) * RATE3;
    }

    return bill;
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

    bill = calculate_bill(units);

    printf("\n----- Electricity Bill -----\n");
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs %ld.%02ld\n",
           bill / 100, bill % 100);

    return 0;
}
