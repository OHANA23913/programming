#include <stdio.h>

#define SIZE 10

int main() {
    double numbers[SIZE];
    
    // Чтение массива
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    // Вывод в обратном порядке
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%.0f", numbers[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}