#include<stdio.h>
 int main(){
    int date ;
    printf("Date (1-7): ",date);
    scanf("%d", &date);

    switch (date)
    {
    case 1 : printf("Monday\n");
         break;
    case 2 : printf("Tuesday\n");
        break;
    case 3 : printf("WEdnesday\n");
        break;
    case 4 : printf("Thursday\n");
        break;
    case 5 : printf("Friday\n");
        break;
    case 6 : printf("Saturday\n");
        break;
    case 7 : printf("Sunday\n");
        break;
    
    default: printf("wrong input\n");
        break;
    }
    return 0;

 }