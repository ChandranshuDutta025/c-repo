#include<stdio.h>
int main(){
//     char star = '*';
//     char *ptr = &star;
//     printf("*ptr = %u\n",ptr);
//     ptr++;
//     printf("ptr = %u\n",ptr);
//     ptr--;
//     printf("ptr = %u\n",ptr);
    // int age = 22;
    // int _age = 22;
    // int *ptr = &age;
    // int *_ptr = &_age;
    // printf("%u,%u difference = %u",ptr,_ptr,ptr-_ptr);
    // printf("%u,%u comparison = %u",ptr,_ptr,ptr==_ptr);
    int aadhar[5] ;
    for (int i = 0; i < 5; i++)
    {
       printf("%d index : ",i);
       scanf("%d",&aadhar[i]);
    }
    for (int i = 0; i < 5; i++)
    {
       printf("\n%d index : %d",i,aadhar[i]);
       
    }
    


    return 0;
}
