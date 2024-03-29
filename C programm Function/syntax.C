#include<stdio.h>
// declaration type/prototype
void printHello();
void printGoodbye();

int main (){
    printHello();
   printGoodbye();// function call
    return 0;
}
// function Defination
void printHello(){
    printf("Hello World\n");
}
void printGoodbye(){
    printf("GoodBye\n");
}