#include <stdio.h>

int main() {
    int a = 5;
    int *p;   // pointer variable
    p = &a;   // store address of a

    printf("Value of a: %d\n", a);   // 5
    printf("Address of a: %p\n", &a); // e.g., 0x100
    printf("Pointer p stores: %p\n", p); // same as &a

    *p = 20;  // modify value at address p points to
    printf("New value of a: %d\n", a); // 20
}
