#include <stdio.h>

#define ROWS1 10
#define COLS1 3
#define ROWS2 3
#define COLS2 10

int main() {
    double matrix1[ROWS1][COLS1];
    double matrix2[ROWS2][COLS2];
    double result[ROWS1][COLS2];
    
    // Чтение первой матрицы 10x3
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            scanf("%lf", &matrix1[i][j]);
        }
    }
    
    // Чтение второй матрицы 3x10
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            scanf("%lf", &matrix2[i][j]);
        }
    }
    
    // Инициализация результирующей матрицы нулями
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            result[i][j] = 0.0;
        }
    }
    
    // Умножение матриц
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Вывод результата одной строкой по строкам
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%.0f", result[i][j]);
            if (!(i == ROWS1 - 1 && j == COLS2 - 1)) {
                printf(" ");
            }
        }
    }
    printf("\n");
    
    return 0;
}