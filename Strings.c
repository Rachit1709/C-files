#include <stdio.h>
#include <string.h>

int main() {
    char greeting[20] = "Hello, ";
    char name[] = "Alice";

    strcat(greeting, name);
    printf("%s\n", greeting);

    return 0;
}
