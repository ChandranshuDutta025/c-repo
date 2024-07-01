#include<stdio.h>
int main(){
    int num,mod,copy,ans = 0;
    printf("Enter your Number : ");
    scanf("%d",&num);
    copy = num;

    while (num > 0)
    {
         mod = num % 10;
         ans = ans * 10 + mod ; 
         num = num / 10;
    }
    if(ans == copy){
        printf("Palindrome\n ");
    }
    else{
        printf("Non-Palindrome\n");
    }
    return 0;
}