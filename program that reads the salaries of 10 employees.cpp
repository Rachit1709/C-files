#include <stdio.h>

int main() {
    int numEmployees = 10;
    float salaries[numEmployees];
    
    // Input salaries
    printf("Enter the salaries of %d employees:\n", numEmployees);
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }
    
    // Find maximum and minimum salaries
    float maxSalary = salaries[0];
    float minSalary = salaries[0];
    
    for (int i = 1; i < numEmployees; i++) {
        if (salaries[i] > maxSalary) {
            maxSalary = salaries[i];
        }
        if (salaries[i] < minSalary) {
            minSalary = salaries[i];
        }
    }
    
    // Print maximum and minimum salaries
    printf("Maximum salary: %.2f\n", maxSalary);
    printf("Minimum salary: %.2f\n", minSalary);
    
    return 0;
}

