#include <stdio.h>

int main() {
    int matrix[5][5];
    int i, j;

    // Input the 5x5 matrix
    printf("Enter the elements of the 5x5 matrix:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the main diagonal elements
    printf("Main diagonal elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    return 0;
}
