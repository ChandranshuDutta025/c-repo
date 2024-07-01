#include<stdio.h>

int main()
{
    int row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &row); // Use & to get the address of row
    printf("Enter the number of columns: ");
    scanf("%d", &column); // Use & to get the address of column
    
    int arr[row][column];
    
    // Input the elements of the array
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            printf("Enter the element for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Transpose the array
    for(int i = 0; i < row; i++) {
        for(int j = i + 1; j < column; j++) { // Only swap upper triangle elements
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Print the transposed array
    printf("Transposed Matrix:\n");
    for(int i = 0; i < column; i++) {
        for(int j = 0; j < row; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
