#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // store original number

    while (num != 0) {
        remainder = num % 10;          // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        num = num / 10;                // remove last digit
    }

    if (reversed == originalNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
