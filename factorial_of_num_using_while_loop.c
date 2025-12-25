
        #include <stdio.h>
        int main() {
    int num;
    int fact = 1;
    int i = 1;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    while (i <= num) {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d is %d\n", num, fact);

    return 0;
    
     }
     
     
     
        
        
        
