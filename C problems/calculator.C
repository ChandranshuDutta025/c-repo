#include<stdio.h>

int main (){
    int a,b,n ;
    printf("Enter your numbers : ");
    scanf("%d %d",&a,&b);
    while (1)
    {
 
    printf("which operation you would like to perform\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divide\n5.Modulo\nPress '6' to Exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("Answer : %d\n",a+b);
        break;
    case 2: printf("Answer : %d\n",a-b);
        break;
    case 3: printf("Answer : %d\n",a*b);
        break;
    case 4: if (b!= 0)
    {
        printf("Answer : %d\n",a/b);
    }
    else{
         printf("Invalid Output\n");
    }
        break;
    case 5: printf("Answer : %d\n",a%b);
        break;
    case 6 : return 0;
        
    
    default:
        printf("Invalid Choice\n");
    }
    }
    return 0;
}