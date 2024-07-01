#include<stdio.h>
#include<string.h>
int main()
{
    char firststr[] ="HHAa";
    char secondtstr[] = "HHAA";
    int result1=strcmp(secondtstr,firststr);
    printf("%d",result1);//output -1


     char firststr[] ="HHAa";
    char secondtstr[] = "HHAA";
    int result2=strcmp(firststr,secondtstr);
    printf("%d",result2);//output +1


     char firststr[] ="HHAA";
    char secondtstr[] = "HHAA";
    int result3=strcmp(secondtstr,firststr);
    printf("%d",result3);//output 0

    return 0;
}