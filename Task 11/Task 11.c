
#include <stdio.h>
#include <limits.h>

#define MAX_READING 65535U
#define RATE1_PAISE 150
#define RATE2_PAISE 200
#define RATE3_PAISE 300

long long calculate_bill(unsigned int units)
{
    long long bill;

    if (units <= 100)
        bill = (long long)units * RATE1_PAISE;
    else if (units <= 200)
        bill = 100LL * RATE1_PAISE
             + (long long)(units - 100) * RATE2_PAISE;
    else
        bill = 100LL * RATE1_PAISE
             + 100LL * RATE2_PAISE
             + (long long)(units - 200) * RATE3_PAISE;

    return bill;
}

int main(void)
{
    unsigned int units = 250;
    long long bill_paise = calculate_bill(units);

    printf("Maximum meter reading: %u\n", MAX_READING);
    printf("Rate 1: %d paise/unit\n", RATE1_PAISE);
    printf("Rate 2: %d paise/unit\n", RATE2_PAISE);
    printf("Rate 3: %d paise/unit\n", RATE3_PAISE);

    printf("Units consumed: %u\n", units);
    printf("Bill amount: Rs %lld.%02lld\n",
           bill_paise / 100, bill_paise % 100);

    printf("sizeof(int): %zu bytes\n", sizeof(int));
    printf("sizeof(long): %zu bytes\n", sizeof(long));
    printf("sizeof(long long): %zu bytes\n", sizeof(long long));

    printf("LLONG_MAX: %lld\n", LLONG_MAX);

    return 0;
}

