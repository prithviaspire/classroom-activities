#include <stdio.h>

int main() {
    int i = 1;
    int product = 1;

    while (i <= 5) {
        product = product * i;
        i++;
    }

    printf("Product of numbers from 1 to 5 is %d\n", product);

    return 0;
}
