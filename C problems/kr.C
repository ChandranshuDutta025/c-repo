// #include<stdio.h>

// int factorial(int digit){
//     if (digit== 0 || digit ==1)
//     {
//        return 1;
//     }
//     else{
//         return digit * factorial(digit-1);
//     }
// }
// int krishnamurthy(int num){
//     int original_num= num;
//     int sum =0;
//     while(num!=0){
//         int digit =num%10;
//         sum += factorial(digit);
//         num /=10;
//     }
//     if (sum == original_num)
//     {
//        return(sum);
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int start,end ,temp,n,count;
//     printf("Enter your starting range: ");
//     scanf("%d",&start);
//     printf("Enter your ending range: ");
//     scanf("%d",&end);
//     count=0;
//     for(int i =start ;i < end; i++){
//        if(krishnamurthy(i)){
//        printf("%d is krisnamurthy number.\n",i);
//        }
//     }
//     return 0;
// }
#include<stdio.h>
int factorial(int digit){
    if (digit == 0 || digit == 1)
    {
        return 1;
    }
    else{
        return digit * factorial(digit-1);
    }
    
}
int krishnamurthy(int num){
    int original_num=num;
    int sum =0;
    while (num!=0)
    {
        int digit =num%10;
        sum += factorial(digit);
        num = num /10;
    }
    if (original_num==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
int main(){
    int start,end;
    printf("Enter starting range:");
    scanf("%d",&start);
    printf("Enter emding range:");
    scanf("%d",&end);
    for(int i = start;i<=end;i++){
        if(krishnamurthy(i)){
            printf("%d ",i);
        }
    }
    return 0;
}