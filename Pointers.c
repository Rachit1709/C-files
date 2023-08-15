#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", ptr);

    return 0;
}
