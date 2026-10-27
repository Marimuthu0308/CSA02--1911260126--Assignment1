
#include <stdio.h>

int main(void)
{
    int units;
    long meter_number = 123456L;
    long long total_paise = 16250LL;
    float temperature = 28.5f;
    double voltage = 230.75;
    char grade = 'A';
    char name[30];

    printf("Enter student name: ");
    if (scanf("%29s", name) != 1)
    {
        printf("Invalid name input.\n");
        return 1;
    }

    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0)
    {
        printf("Invalid units. Enter a non-negative integer.\n");
        return 1;
    }

    printf("\n--- Meter Details ---\n");
    printf("Name: %s\n", name);
    printf("Units: %d\n", units);
    printf("Meter number: %ld\n", meter_number);
    printf("Total paise: %lld\n", total_paise);
    printf("Temperature: %f\n", temperature);
    printf("Voltage: %lf\n", voltage);
    printf("Grade: %c\n", grade);

    printf("Bill amount: Rs %lld.%02lld\n",
           total_paise / 100, total_paise % 100);

    return 0;
}

