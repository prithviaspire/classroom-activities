#include <stdio.h>

// Function returns a value
int updateValue(int y)
{
    y = y + 10;      // modify local copy
    return y;        // return modified value
}

int main(void)
{
    int x = 50;

    printf("Before function call: %d\n", x);

    updateValue(x);   // return value is IGNORED

    printf("After function call: %d\n", x);

    return 0;
}

#include <stdio.h>

// Function returns a value (but main ignores it)
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    return a;   // returning swapped value (for demonstration)
}

int main(void)
{
    int x = 10, y = 20;

    printf("Values of x and y before swap are: %d, %d\n", x, y);

    swap(x, y);   // return value is ignored

    printf("Values of x and y after swap are: %d, %d\n", x, y);

    return 0;
}

