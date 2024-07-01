#include<stdio.h>
#include<string.h>
int main()
{
    char firststr[] ="Hello";//the size of the first string should have the capacity to have both the strings together
    char secondtstr[] =" World";
    strcat(firststr,secondtstr);
    printf("%s",firststr);
    return 0;
    // char firststr[2] ="Hello";//the size of the first string should have the capacity to have both the strings together
    // char secondtstr[] =" World";
    // strcat(firststr,secondtstr);
    // printf("%s",firststr);
    // return 0;
    // //char firststr[2] ="Hello";//the size of the first string should have the capacity to have both the strings together
    
}