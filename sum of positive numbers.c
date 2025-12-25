#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter positive integers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num > 0) {
            sum = sum + num;
        }
    }

    printf("Sum of entered positive integers is %d\n", sum);

    return 0;
}
