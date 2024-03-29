#include<stdio.h>

int main() {
    int n;
    printf("Enter your number here : ");
    scanf("%d", &n);
    int multiply = 1; // Initialize multiply to 1
    for (int i = 1; i <= 10; i++) {
        multiply = n * i; // Multiply n with i
        printf("%d * %d = %d\n", n, i, multiply); // Display multiplication table
    }
    return 0;
}