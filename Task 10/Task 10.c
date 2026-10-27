
#include <stdio.h>
#include <limits.h>

#define BILL_PAISE 16250LL

int main(void)
{
    int n, i;
    long long paise_total;
    float float_total;
    double double_total;

    int counts[] = {4000, 60000, 800000};

    printf("DATA TYPE SIZE AND RANGE\n");
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(long) = %zu bytes\n", sizeof(long));
    printf("sizeof(long long) = %zu bytes\n", sizeof(long long));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));

    printf("INT_MAX = %d\n", INT_MAX);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("LLONG_MAX = %lld\n\n", LLONG_MAX);

    for (i = 0; i < 3; i++)
    {
        n = counts[i];

        paise_total = (long long)n * BILL_PAISE;
        float_total = 0.0f;
        double_total = 0.0;

        {
            int j;
            for (j = 0; j < n; j++)
            {
                float_total += 162.50f;
                double_total += 162.50;
            }
        }

        printf("Number of bills: %d\n", n);
        printf("Integer paise total: %lld\n", paise_total);
        printf("Integer total in rupees: %.2f\n",
               paise_total / 100.0);
        printf("Float total: %.2f\n", float_total);
        printf("Double total: %.2f\n", double_total);
        printf("Float difference: %.2f rupees\n",
               (double)float_total - paise_total / 100.0);
        printf("Double difference: %.2f rupees\n\n",
               double_total - paise_total / 100.0);
    }

    return 0;
}

