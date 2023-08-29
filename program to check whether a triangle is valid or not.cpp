#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    
    printf("Enter three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    
    int sumAngles = angle1 + angle2 + angle3;
    
    if (sumAngles == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }
    
    return 0;
}

