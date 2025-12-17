#include <stdio.h>
int main() {
char op;
printf("Enter a math operator (+, -, *, /): ");
scanf("%c", &op);      //make space before %c scanf(" %c,&op");  notice the changes
                            // space before %c avoids input issues
switch (op) {
case '+':
printf("Addition");
break;
case '-':
printf("Subtraction");
break;
case '*':
printf("Multiplication");
break;
case '/':
printf("Division");
break;
default:
printf("Invalid operator");
break;
}
return 0;
}
