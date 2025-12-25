#include <stdio.h>

int main() {
    int num;    
    int sum = 0;     

    printf("Enter integers (enter 0 to stop):\n");

    while (num != 0) {
        scanf("%d", &num);     
        if (num > 0) {
            sum += num;          
        }
    }

    printf("Sum of all positive integers: %d\n", sum);

    return 0;
}
