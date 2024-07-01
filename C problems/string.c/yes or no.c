#include<stdio.h>
#include<string.h>

void check(char str[], char ch[]);

int main()
{
    char ch = 'aieou';
    char str[30];
    printf("Enter The string here :-");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str ,"\n") ] = '\0';
    
    check(str,ch);
    return 0;
}
void check(char str[],char ch[]){
    int count = 0;
    for (int i = 0; str[i] !='\0'; i++)
    for (int j = 0; ch[j] != '\0'; j++)
    {
        {
             if (str[i] == ch)
             {
                count++;
                break;
            }
        }
    }
    printf("The no. of vowels are %d",count);
}