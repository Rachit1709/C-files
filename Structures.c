#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student student1;
    strcpy(student1.name, "John");
    student1.age = 20;

    printf("Name: %s\nAge: %d\n", student1.name, student1.age);

    return 0;
}
