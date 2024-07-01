#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
         printf("Enter the eleements");
         scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
    if (arr[i] % 2 ==0) {
        printf("%d",arr[i]);
    }
    printf("\t");
    }
    return 0;

}