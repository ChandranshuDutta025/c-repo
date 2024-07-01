#include<stdio.h>
float percentage(float math,float science , float sanskrit);
int main(){
   float math,science,sanskrit;
    printf("Numbers acquirred in math ,science and sanskrit are:");
    scanf("%f %f %f ", &math , &science , &sanskrit);
   printf("percentage: %.2f%%\n",percentage( math,science,sanskrit));
    return 0;
}
float percentage(float math,float science , float sanskrit){
    return((math + science + sanskrit)/3) ;
}

