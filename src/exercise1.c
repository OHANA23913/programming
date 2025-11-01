#include <stdio.h>

int main() {
    double numbers[5];
    double sum = 0.0;
    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    
    double average = sum / 5;
    printf("Average: %.2f\n", average);

    return 0;
}