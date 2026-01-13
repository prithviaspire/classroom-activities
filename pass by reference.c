#include <stdio.h>

// Function using pass by reference (via pointer)
void updateValue(int *y)
{
    
    // Modifies the original variable using its address
    *y = *y + 10;
}

int main()
{
    int x = 50;

    printf("Before function call: %d\n", x);

    // Passes the address of x
    updateValue(&x);

    // Original variable is changed
    printf("After function call: %d\n", x);

    return 0;
}
