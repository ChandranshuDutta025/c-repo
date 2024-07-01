#include<stdio.h>
 float convertC_F(float c);
 int main(){
       printf("%f",convertC_F(37));
       return 0;
 }

 float convertC_F(float c){
    float f = (c * 9/5)+ 32;
    return f;
 }