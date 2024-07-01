#include<stdio.h>
int main()
{
    float price = 100.00;
    float *ptr = &price;
    float **pptr =&ptr;
    printf("%f\n",**(pptr));
    printf("%p\n",ptr);
    printf("%p\n",ptr);
    return 0;
}