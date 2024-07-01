#include<stdio.h>
int searchkey(int search,int *arr,int n);
int main(){
    int n,search;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find :");
    scanf("%d",&search);
    int result= searchkey(search, arr, n);
    if (result != -1)
    {
        printf("The number %d is found at arr[%d]",search,result);
    }
     else
    {
        printf("The number %d is not found ",search);
    }
    
    return 0;
}
int searchkey(int search, int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i]==search)
        {
           return i;
        }
    }
    return -1;
}