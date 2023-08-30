#include <stdio.h>

void display(int matrix[][3], int rows, int cols) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row = 2, column = 3;
    int matrix[2][3] = {{2, 3, 4}, {5, 6, 4}};

    // Display current matrix
    display(matrix, row, column);

    // Transpose the matrix
    int transpose[3][2];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display transposed matrix
    display(transpose, column, row);

    return 0;
}

