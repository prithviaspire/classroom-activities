#include <stdio.h>

// Function using pass by value
int updateValue(int y)
{
    y = y + 10;      // modifies only local copy
    return y;        // returns 60
}

int main()
{
    int x = 50;

    printf("Before function call: %d\n", x);

    // Function is called but returned value is NOT accepted
    updateValue(x);

    printf("After function call: %d\n", x);

    return 0;
}
