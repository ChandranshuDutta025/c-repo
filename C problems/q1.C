#include<stdio.h>

void swap ( int *a );


int main() {
    int a = 5;
    swap(&a);
     printf("%u\n",&a);
    return 0;
}

void swap ( int *a ) {

    printf("%u\n",a);
    return;
}
