#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);  //misplace this statement as first write 5*i then i
    }

    return 0;
}

