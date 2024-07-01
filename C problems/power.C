#include <stdio.h>
#include <math.h>
void square(float n);
void circle(float r);
void rectangle(float length,float width);
int main (){
     float n;
     printf("Enter the side of the square : ");
     scanf("%f",&n);
     square(n);
     

     float r;
     printf("Enter the radius: ");
     scanf("%f",&r);
    circle( r);
     

     float length;
     float width;
     printf("Enter the length and width: ");
     scanf("%f,%f",&length ,&width);
    rectangle( length, width);
     return 0;
}

void square(float n){
    n = pow(n,2);
    printf("The area of the square is %f\n",n);
}
void circle(float r){
    r = 3.14 * pow(r,2);
     printf("The area of the circle is %f\n",r);
}
void rectangle(float length,float width){
    float area ;
    area = length * width;
    printf("The area of rectangle is %f\n",area);
}