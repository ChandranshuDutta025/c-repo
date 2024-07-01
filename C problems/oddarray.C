#include<stdio.h>
 
 void oddNumbers(int arr[],int n);

 int main(){
    int array[] = {1,2,3,4,5,6};
    oddNumbers(array,6);
    return 0;
 }
 void oddNumbers(int arr[],int n){
    for(int i = 0;i< n; i++){
        if( arr[i] % 2 != 0){
            printf("%d\n",arr[i]);
        }
    }
    
 }