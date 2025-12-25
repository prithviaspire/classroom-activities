#include <stdio.h>

int main() {
    int num, sumEven = 0, sumOdd = 0, i = 1, n;

    printf("Enter the limit up to which you want sums: ");
    scanf("%d", &n);

    do {
        if (i % 2 == 0) {
            sumEven += i;  // add to even sum
        } else {
            sumOdd += i;   // add to odd sum
        }
        i++;
    } while (i <= n);

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    return 0;
}
