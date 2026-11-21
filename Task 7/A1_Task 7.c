#include <stdio.h>

int main(void)
{
    int units = 150;
    int rate = 225;

    int integer_result;
    float float_result;
    double precise_result;

    integer_result = units * rate / 100;

    float_result = (float)(units * rate) / 100;

    precise_result = (double)(units * rate) / 100.0;

    printf("Electricity Units: %d\n", units);
    printf("Rate: %d paise\n", rate);

    printf("\nInteger Result: Rs %d\n", integer_result);
    printf("Float Result: Rs %.2f\n", float_result);
    printf("Double Result: Rs %.2lf\n", precise_result);

    return 0;
}
