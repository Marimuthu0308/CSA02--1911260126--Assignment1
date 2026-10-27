#include <stdio.h>

#define READINGS_PER_YEAR 35040

int main(void)
{
    long long yearly_wh = 0;
    long long reading_wh;
    double normal_tariff, peak_tariff;
    double total_bill = 0.0;
    int n, i, hour;

    printf("Enter normal tariff per kWh: ");
    scanf("%lf", &normal_tariff);

    printf("Enter peak tariff per kWh: ");
    scanf("%lf", &peak_tariff);

    printf("Enter number of readings: ");
    scanf("%d", &n);

    if (n < 1 || n > READINGS_PER_YEAR ||
        normal_tariff < 0 || peak_tariff < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter watt-hours consumed: ");
        scanf("%lld", &reading_wh);

        printf("Enter hour (0-23): ");
        scanf("%d", &hour);

        if (reading_wh < 0 || hour < 0 || hour > 23)
        {
            printf("Invalid reading or hour.\n");
            return 1;
        }

        yearly_wh += reading_wh;

        if (hour >= 18 && hour < 22)
            total_bill += (reading_wh / 1000.0) * peak_tariff;
        else
            total_bill += (reading_wh / 1000.0) * normal_tariff;
    }

    printf("\nTotal energy: %lld Wh\n", yearly_wh);
    printf("Total bill: Rs. %.2f\n", total_bill);

    return 0;
}
