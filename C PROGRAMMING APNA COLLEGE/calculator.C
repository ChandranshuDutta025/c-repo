#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    float n1,n2,result;
    printf("Sumation:1\nSubstraction:2\nmultiplication:3\nDivison:4\n");
    scanf("%d", &choice);

    printf("Enter your first number: ");
    scanf("%f",&n1);
    printf("Enter your second number: ");
    scanf("%f",&n2);

   if(choice==1){
    result= n1 + n2;
    printf("%f\n",result);
   }
   else if(choice==2){
    result= n1 - n2;
    printf("%f\n",result);
   }
   else if(choice==3){
    result= n1 * n2;
    printf("%f\n",result);
   }
   else if(choice==4){
      if (n2 == 0)
      {
        printf("Error!division by zero");
      }
      else{
    result= n1 / n2;
    printf("%f\n",result);
   }
   }
   else{
    printf("Error in choosing operation");
   }
   
    return 0;
}
