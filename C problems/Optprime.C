#include<stdio.h>
int main (){
    int start , end ,count;
    printf("Enter your starting range: ");
    scanf("%d",&start);
    printf("Enter your ending range: ");
    scanf("%d",&end);
    for(int i = start; i <= end ; i++){
        count = 0;
        for(int j = 2; j <= i/2; j++){
            if (i % j == 0)
            {
               count =1;
               break;
            }
            }
             if(count == 0 && i != 1){
            printf(" %d",i);
        }
    }
    return 0;
}

