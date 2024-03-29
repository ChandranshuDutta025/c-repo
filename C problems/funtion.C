#include<stdio.h>
void namaste();
void Bonjour();

int main(){
    char Ch;
    printf("enter 'f' for French and 'i' for Indian: ");
    scanf("%c", &Ch);
    if (Ch == 'i')
    {
        namaste();
    }
    else if (Ch == 'f')
    {
        Bonjour();
    }
    else{
        printf("Input Error.");
    }
    return 0;
}

void namaste(){
    printf("Namaste");
}
void Bonjour(){
    printf("Bonjour");
}