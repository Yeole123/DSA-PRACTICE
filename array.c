#include <stdio.h>

int main() {
    int row, col, i, j;

    // Get matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize max and min with first element
    int max = matrix[0][0];
    int min = matrix[0][0];

    // Find max and min
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    // Print results
    printf("\nMaximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
