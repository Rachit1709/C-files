//The marks obtained by a student in 5 different subjects are input through the keyboard.
// The student gets a division as per the following rules: Percentage above or equal to 60 -
// First division Percentage between 50 and 59 - Second division Percentage between 40 and 49 - 
//Third division Percentage less than 40 - Fail Write a program in c to calculate the division obtained by the student. 
#include <stdio.h>

int main() {
    int marks[5];
    float totalMarks = 0;
    
    printf("Enter marks obtained in 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }
    
    float percentage = (totalMarks / 500) * 100;
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 60) {
        printf("Division: First Division\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Division: Second Division\n");
    } else if (percentage >= 40 && percentage < 50) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }
    
    return 0;
}

