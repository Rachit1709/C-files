#include <stdio.h>

int main() {
    int height, width;

    printf("Enter the height of the character: ");
    scanf("%d", &height);

    printf("Enter the width of the character: ");
    scanf("%d", &width);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || i == height / 2 || j == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}