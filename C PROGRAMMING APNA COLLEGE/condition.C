#include<stdio.h>
#include<math.h>
int main(){
    int age ;
    printf("Input your age ",age);
    scanf("%d", &age);
    if( age > 18 ){
        printf("You are adult.\n");
        printf("You can vote.\n");
        printf("You can have Driver License.\n");
    }
    else {
        printf("You are not an adult.");
    }

    return 0;
    
    }