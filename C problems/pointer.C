#include<stdio.h>

int main ()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%u\n", &age);
    printf("%u", &ptr);
    return 0;
}