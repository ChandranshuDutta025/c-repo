#include<stdio.h>
void fortable(int arr[] [10], int n,int m,int number);

int main(){
    int array[2][10] ;
    fortable( array, 0, 10, 2);
    fortable( array, 1, 10, 3);
   
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[1][i]);
    }
     return 0;
}

void fortable(int arr[] [10], int n,int m,int number){
    for(int i = 0; i < m; i++){
        arr[n][i] = number * (i+1);
    }
}