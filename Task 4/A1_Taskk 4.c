#include <stdio.h>

/* Safely written macros */
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define RUPEES_TO_PAISE(r) ((r) * 100)

int main(void)
{
    int a = 5;
    int b = 8;
    int i = 10;
    int j = 20;

    printf("Square of a = %d\n", SQUARE(a));

    printf("Square of (a + 1) = %d\n", SQUARE(a + 1));

    printf("Maximum value = %d\n", MAX(a, b));

    printf("Rupees to paise = %d\n", RUPEES_TO_PAISE(50));

    printf("Before MAX: i = %d, j = %d\n", i, j);

    printf("Maximum of i and j = %d\n", MAX(i, j));

    printf("After MAX: i = %d, j = %d\n", i, j);

    return 0;
}
