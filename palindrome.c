#include <stdio.h>

int main() {
    int num = 123;       
    int rev = 0;         
    int temp = num;     

    while (temp > 0) {
        int digit = temp % 10;      
        rev = rev * 10 + digit;     
        temp /= 10;                
    }

    printf("Original: %d, Reversed: %d\n", num, rev);

    if (num == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
