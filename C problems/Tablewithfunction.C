#include <stdio.h>

void table(int n);

int main(){
   int n;
    printf("Enter the number for the table: ");
    scanf("%d", &n);
    
    table(n);
    return 0;
}

void table(int n){
    printf("The table of %d is \n",n);
    for (int i = 1; i <= 10; i++)
    {
       printf("%d\n",n * i);
    }
    
}
