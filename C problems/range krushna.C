#include<stdio.h>

int factorial(int digit){
    if (digit== 0 || digit ==1)
    {
       return 1;
    }
    else{
        return digit * (digit-1);
    }
    
}
int krishnamurthy(int num){
    int original_num= num;
    int sum =0;
    while(num!=0){
        int digit =num%10;
        sum += factorial(digit);
    }
    return (sum== original_num);
}
int main(){
    int start,end ,temp,n,count;
    printf("Enter your starting range: ");
    scanf("%d",&start);
    printf("Enter your ending range: ");
    scanf("%d",&end);
    count=0;
    for(int i =start ;i < end; i++){
       if(krishnamurthy(i));
       printf("%d is krisnamurthy number.");

    }
    return 0;
}