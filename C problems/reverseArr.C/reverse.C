#include<stdio.h>
 
 void reverseArray(int arr[],int n);
 void printArray(int arr[],int n);

 int main(){
    int array[] = {1,2,3,4,5,6};
    reverseArray(array,6);
    printArray(array,6);
    return 0;
 }

  void printArray(int arr[],int n){
    for(int i = 0 ; i <n ; i++){
        printf("%d\t",arr[i]);
    }

  }

 void reverseArray(int arr[],int n){
    for(int i = 0;i< n/2; i++){
       int firstvalue = arr[i];
       int secondvalue = arr[n-i-1];
       arr[i] = secondvalue;
       arr[n - i -1] =firstvalue;
     
    }
    
 }