#include<stdio.h>
int main() {
    char firstname[50] ;
    char lastname[50] ;

    printf("Enter your first name: ");
    scanf("%s",firstname);
    printf("Enter your last name: ");
    scanf("%s",lastname);
    
    printf("%s\t %s", firstname , lastname);
    return 0;
}
