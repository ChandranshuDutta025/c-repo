#include<stdio.h>
int main(){
    int rem, temp ,num,fact ,sum = 0;
    printf("enter your number: ");
    scanf("%d",&num);

    for(temp = num;temp > 0;temp = temp/10){
        fact =1;
        rem = temp % 10;
            for( int i =1; i< rem; i++){
                fact = fact * i;
                sum = sum + fact;
            }
    }
    if (sum = num)
    {
       printf("%d is a krishnamurthy number.", num);
    }
    else
    {
        printf("%d is a non-krishnamurthy number.", num);
    }
    
    
return 0;
}