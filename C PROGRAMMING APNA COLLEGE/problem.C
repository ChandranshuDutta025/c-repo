#include <stdio.h>
#include <math.h>
   
   int main(){
      int a;
       
       printf("The students marks(1-100) ",a);
       scanf("%d", &a);

       if( a > 100 || a < 0 ){
         printf("Wrong number");
      }
      else if( a >= 30 && a < 70){
         printf("Grade B\n");
      }
      else if( a >= 70 && a < 90){
         printf("Grade A\n");
      }
      else if( a >= 90 && a < 100){
         printf("Grade A+\n");
      }
      else {
         printf("Grade C\n");
      }
       return 0;
   }

// int main(){
//    int x ;

  
//    printf("The number to check is ",x);
//    scanf("%d", &x);
//      if (x >= 0){
//        printf("Positive and ");
//        if( x % 2 == 0){
//          printf("Even number");
//        }
//        else{
//          printf("Odd NUmber.");
//        }
//   }
//   else{
//    printf("Negetive Number");
//   }

//    return 0;
// }