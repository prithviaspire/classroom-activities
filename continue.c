#include <stdio.h>
int main() {
for (int i = 1; i <= 10; i++) {
if (i == 6)
continue;    //remove this 
else         //remove this too
printf("%d ", i);
}
return 0;
}
