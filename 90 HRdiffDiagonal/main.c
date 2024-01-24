#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int diagonal[2] = {0, 0};

    for (int i = 0; i < arr_rows; i++) {
        for (int j = 0; j < arr_columns; j++) {
            if (i == j) {
                diagonal[0] += arr[i][j];
            }
            if (j == arr_columns - i - 1) {
                diagonal[1] += arr[i][j];
            }
        }
    }

    return abs(diagonal[0] - diagonal[1]);
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {9, 8, 9}};

    int *arr_ptr[3];
    for (int i = 0; i < 3; i++) {
        arr_ptr[i] = arr[i];
    }

    int result = diagonalDifference(3, 3, arr_ptr);

    printf("%d\n", result);
    return 0;
}
