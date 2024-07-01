#include<stdio.h>

int main()
{
    int row,column;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&column);
    int arr[row][column];
    for(int i = 0; i<row; i++){
        for(int j =0;j<column;j++){
            printf("Enter the element for arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
         for(int i = 0; i<row; i++){
        for(int j =0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of given array is: \n");
    for(int i = 0; i<row; i++){
        for(int j =i+1;j<column;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
     for(int i = 0; i<column; i++){
        for(int j =0;j<row;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
