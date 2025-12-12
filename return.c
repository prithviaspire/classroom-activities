#include <stdio.h>
int sum(int a, int b) {
int s1 = a + b;
return s1;
}
int main()
{
int num1 = 10;
int num2 = 10;
int sumof = sum(num1, num2);
printf("%d", sumof);
return 0;
}
