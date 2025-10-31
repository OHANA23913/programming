#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Usage: %s <X> <K>\n", argv[0]);
        return 1;
    }
    
    double x = atof(argv[1]);
    int k = atoi(argv[2]);
    double numbers[SIZE];
    
    // Чтение массива
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    // Проверка корректности K
    if (k < 0 || k >= SIZE) {
        printf("K must be between 0 and %d\n", SIZE - 1);
        return 1;
    }
    
    // Сдвиг элементов вправо начиная с позиции K
    for (int i = SIZE - 1; i > k; i--) {
        numbers[i] = numbers[i - 1];
    }
    
    // Вставка X на позицию K
    numbers[k] = x;
    
    // Вывод результата
    for (int i = 0; i < SIZE; i++) {
        printf("%.0f", numbers[i]);
        if (i < SIZE - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}