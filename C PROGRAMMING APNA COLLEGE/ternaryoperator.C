#include<stdio.h>

int main(){
    int age ;
    printf("Input your age ",age);
    scanf("%d", &age);
    
    age >= 18 ? printf ("You are adult,") : printf("You are not adult,") ;
    return 0 ;
}