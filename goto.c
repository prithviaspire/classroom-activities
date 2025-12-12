#include <stdio.h>
int main() {
int n = 1;
label:
printf("%d ", n);
n++;
if (n <= 10)
goto label;
return 0;
}
