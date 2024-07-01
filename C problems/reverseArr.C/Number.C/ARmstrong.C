#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,sum = 0;
    printf("Enter your number :");
    scanf("%d",&num);
    int copy = num;
    while(num >0){
        temp = num %10;
        sum = sum+ pow(temp,3);
        num = num /10;
    }
    if (sum == copy )
    {
       printf("%d is a armstrong number.", copy);
    }
    else
    {
       printf("%d is not a armstrong number.", copy);
    }
    return 0; 
}