
//Run this code in your local machine
#include <stdio.h>
int sum(int a, int b) {    // Function definition: sum() takes 2 arguments
int s1 = a + b;
return s1;                //comment this and run the code see the output
}
int main()
{
int num1 = 10;
int num2 = 10;
int sumof = sum(num1, num2);        // Function call: sum() with arguments num1, num2
printf("%d", sumof);
return 0;
}
