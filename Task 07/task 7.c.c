
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int units = 199;
    int price = 230;
    double charge = 16.257;
    long large_value = 3000000000L;
    float f = 0.1f;
    int total_paise;
    int rounded_paise;
    int i;

    printf("--- Unexpected Results ---\n");

    printf("1. Integer division: %d\n", units / 100);
    printf("2. Integer multiplication: %d\n", units * price / 100);
    printf("3. Float precision: %.20f\n", f);

    printf("\n--- Type Conversion ---\n");
    printf("Implicit conversion: %.2f\n", (double)units / 100);
    printf("Explicit cast to int: %d\n", (int)charge);

    printf("Large long value: %ld\n", large_value);
    printf("Casting large long to int: %d\n", (int)large_value);

    rounded_paise = (int)(charge * 100 + 0.5);
    printf("\nRounded charge: %d paise\n", rounded_paise);
    printf("Charge: Rs %d.%02d\n",
           rounded_paise / 100, rounded_paise % 100);

    total_paise = 0;
    for (i = 0; i < 1000; i++)
        total_paise += 10;

    printf("\nInteger total for 1000 bills: %d paise\n",
           total_paise);

    {
        float total = 0.0f;

        for (i = 0; i < 1000; i++)
            total += 0.10f;

        printf("Float total for 1000 bills: %.2f rupees\n",
               total);
        printf("Integer total: %.2f rupees\n",
               total_paise / 100.0);
    }

    return 0;
}

