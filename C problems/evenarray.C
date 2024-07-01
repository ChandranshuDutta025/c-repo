#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i <= n; i++){
        printf("Input the number: ");
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
           arr[i]++;

        }
    }
    for(int j = 0 ; j <= n; j++){
        printf("%d",arr[n]);
        
    }
    return 0;
}