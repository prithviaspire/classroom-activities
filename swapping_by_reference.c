#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // pass addresses

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
