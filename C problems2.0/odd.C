#include <stdio.h>
#include <math.h>

int main() {
    int a;
    do {
        printf("Enter Your Number: ");
        scanf("%d", &a);
        if (a % 2 != 0) {
            printf("It is an odd number.\n");
            break;
        }
    } while (1);
    return 0;
}
