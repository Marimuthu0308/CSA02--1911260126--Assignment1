
#include <stdio.h>

#define RUPEES_TO_PAISE(r) ((r) * 100)
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

static inline int square(int x)
{
    return x * x;
}

static inline int max_value(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    int a = 5, b = 8;
    int i = 4, j = 7;

    printf("Rupees to paise: %d\n", RUPEES_TO_PAISE(10));
    printf("Square of a+1: %d\n", SQUARE(a + 1));
    printf("Maximum: %d\n", MAX(a, b));
    printf("MAX(i++, j): %d\n", MAX(i++, j));
    printf("Square using inline function: %d\n", square(a + 1));
    printf("Maximum using inline function: %d\n", max_value(a, b));

    return 0;
}

