#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &num);
    int copy = num;
    while (num > 0) {
        temp = num % 10;
        sum += temp * temp * temp; // Optimized calculation
        num /= 10;
    }
    if (sum == copy) {
       printf("%d is an Armstrong number.\n", copy);
    } else {
       printf("%d is not an Armstrong number.\n", copy);
    }
    return 0;
}
