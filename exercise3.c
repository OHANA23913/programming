#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void shift_right(double arr[], int k) {
    double temp[SIZE];
    
    // Создаем временный массив со сдвигом
    for (int i = 0; i < SIZE; i++) {
        temp[(i + k) % SIZE] = arr[i];
    }
    
    // Копируем обратно
    for (int i = 0; i < SIZE; i++) {
        arr[i] = temp[i];
    }
}

void shift_left(double arr[], int k) {
    double temp[SIZE];
    
    // Создаем временный массив со сдвигом влево
    for (int i = 0; i < SIZE; i++) {
        temp[i] = arr[(i - k) % SIZE];
        if ((i - k) % SIZE < 0) {
            temp[i] = arr[SIZE + ((i - k) % SIZE)];
        }
    }
    
    // Копируем обратно
    for (int i = 0; i < SIZE; i++) {
        arr[i] = temp[i];
    }
}

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: %s <K>\n", argv[0]);
        return 1;
    }
    
    int k = atoi(argv[1]);
    double numbers[SIZE];
    
    // Чтение массива
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &numbers[i]);
    }
    
    // Выполнение сдвига
    if (k > 0) {
        shift_right(numbers, k);
    } else if (k < 0) {
        shift_left(numbers, -k);
    }
    
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