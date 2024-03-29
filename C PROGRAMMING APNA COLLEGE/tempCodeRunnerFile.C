#include<stdio.h>
 int main(){
    int NUmber ;
    int i = 1;
    printf("Enter Your Number Here : ",NUmber);
    scanf("%d",&NUmber);
   
    do{
        printf("%d\n",NUmber);
    }while(i<=4);
    return 0;
 }