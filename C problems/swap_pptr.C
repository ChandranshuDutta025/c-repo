#include<stdio.h>

void swap ( int a , int b);
void _swap ( int *a , int *b);

int main() {
    int x = 5 , y = 3;
    _swap(&x,&y);
    return 0;
}

void swap ( int a , int b) {
    int t = a;
    a = b;
    b = t;
    printf("a = %d,b = %d",a,b);
    return;
}

void _swap ( int *a , int *b) {
    int t = *a;
    *a = *b;
    *b = t;
     printf("a = %d,b = %d",*a,*b);
}