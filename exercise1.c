#include <stdio.h>

#define SIZE 10

int main() {
    double numbers[SIZE];
    double sum = 0.0;
    
    // Чтение массива
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }
    
    // Вычисление и вывод среднего
    double average = sum / SIZE;
    printf("%.2f\n", average);
    
    return 0;
}