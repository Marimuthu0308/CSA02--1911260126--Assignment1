#include <stdio.h>

int main(void)
{
    int consumer_id;
    int previous_reading, current_reading;
    int units;

    printf("Enter Consumer ID: ");
    if (scanf("%d", &consumer_id) != 1)
    {
        printf("Invalid Consumer ID!\n");
        return 1;
    }

    printf("Enter Previous Meter Reading: ");
    if (scanf("%d", &previous_reading) != 1)
    {
        printf("Invalid previous reading!\n");
        return 1;
    }

    printf("Enter Current Meter Reading: ");
    if (scanf("%d", &current_reading) != 1)
    {
        printf("Invalid current reading!\n");
        return 1;
    }

    if (previous_reading < 0 || previous_reading > 65535 ||
        current_reading < 0 || current_reading > 65535)
    {
        printf("Meter reading out of range!\n");
        return 1;
    }

    units = (current_reading - previous_reading + 65536) % 65536;

    printf("\n----- Consumer Details -----\n");
    printf("Consumer ID: %d\n", consumer_id);
    printf("Previous Reading: %d\n", previous_reading);
    printf("Current Reading: %d\n", current_reading);
    printf("Units Consumed: %d\n", units);

    return 0;
}
