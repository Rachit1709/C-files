#include <stdio.h>
#include <math.h>

double calculateSD(double numArray[], int length) {
    double sum = 0.0, standardDeviation = 0.0;

    for (int i = 0; i < length; i++) {
        sum += numArray[i];
    }

    double mean = sum / length;

    for (int i = 0; i < length; i++) {
        standardDeviation += pow(numArray[i] - mean, 2);
    }

    return sqrt(standardDeviation / length);
}

int main() {
    double numArray[10];
    int length = 10;

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < length; i++) {
        printf("Element %d: ", i + 1);
        scanf("%lf", &numArray[i]);
    }

    double SD = calculateSD(numArray, length);

    printf("Standard Deviation = %.6f\n", SD);
    return 0;
}

