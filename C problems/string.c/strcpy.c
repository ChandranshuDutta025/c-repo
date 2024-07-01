#include<stdio.h>
#include<string.h>
int main()
{
    char newstring[]="Old one";
    char oldstring[]="Newone";
    strcpy(oldstring,newstring);
    printf("%s",oldstring);
    return 0;
}