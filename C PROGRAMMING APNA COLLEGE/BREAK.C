#include<stdio.h>
#include<math.h>
int main(){
    int a;
    do
    { 
         printf("Enter Your Number : ");
        scanf("%d", &a);
        if (a % 7 == 0){
             printf("It is divisible by 7.");
           break;
        }
    } while (1);
   
    return 0;
}