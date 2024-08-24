#include <stdio.h>

int main() {  // Corrected function name from mmain to main
    int x;
    x = 10;
    int *ptr;
    ptr = &x;

    printf("%d\n", x);     // Print the value of x
    printf("%p\n", &x);    // Print the address of x (use %p for pointers)

    return 0;
}
