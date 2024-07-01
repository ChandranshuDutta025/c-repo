#include<stdio.h>
void functionNumbers(int array[],int n);

int main(){
    int arr[6] = {1,2,3,4,5,6};
    functionNumbers(arr,6);
    return 0;
}

void functionNumbers(int array[],int n){
    for(int i = 0; i<6;i++){
        printf("%d = %d \t",i,array[i]);
    }
}