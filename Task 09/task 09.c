
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_READING 65535

double calculate_bill(unsigned int units)
{
    if (units <= 100)
        return units * 1.50;
    else if (units <= 200)
        return 150 + (units - 100) * 2.00;
    else
        return 350 + (units - 200) * 3.00;
}

void test_bill(const char *name, long previous, long current)
{
    unsigned int units;
    double bill;

    printf("\nTest: %s\n", name);
    printf("Previous: %ld, Current: %ld\n", previous, current);

    if (previous < 0 || previous > MAX_READING ||
        current < 0 || current > MAX_READING)
    {
        printf("Result: FAIL - Invalid reading\n");
        return;
    }

    if (current >= previous)
        units = (unsigned int)(current - previous);
    else if (previous == MAX_READING)
        units = (unsigned int)(MAX_READING - previous + 1 + current);
    else
    {
        printf("Result: PASS - Invalid decrease rejected\n");
        return;
    }

    bill = calculate_bill(units);

    printf("Units consumed: %u\n", units);
    printf("Bill amount: Rs %.2f\n", bill);
    printf("Result: PASS\n");
}

int main(void)
{
    char input[30];
    char *end;
    long value;

    printf("TASK 9 - BILLING PROGRAM TESTS\n");

    test_bill("Normal slab 1", 0, 50);
    test_bill("Normal slab 2", 0, 150);
    test_bill("Normal slab 3", 0, 250);
    test_bill("Boundary 100 units", 0, 100);
    test_bill("Boundary 200 units", 0, 200);
    test_bill("Zero units", 100, 100);
    test_bill("Meter rollover", 65535, 0);
    test_bill("Negative reading", 0, -5);
    test_bill("Invalid decrease", 500, 400);

    printf("\nTest: Letters as input\n");
    printf("Enter letters (abc): ");
    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        value = strtol(input, &end, 10);

        if (end == input || (*end != '\n' && *end != '\0'))
            printf("Result: PASS - Invalid letters rejected\n");
        else
            printf("Result: FAIL - Input was numeric\n");
    }

    printf("\nFIVE BILL TOTAL\n");
    printf("Bill 1 (50 units): Rs %.2f\n", calculate_bill(50));
    printf("Bill 2 (100 units): Rs %.2f\n", calculate_bill(100));
    printf("Bill 3 (150 units): Rs %.2f\n", calculate_bill(150));
    printf("Bill 4 (200 units): Rs %.2f\n", calculate_bill(200));
    printf("Bill 5 (250 units): Rs %.2f\n", calculate_bill(250));
    printf("Expected total: Rs 1425.00\n");

    return 0;
}

