#include<stdio.h>
#include<string.h>

struct vectors{
    int x;
    int y;
};

void complex(struct vectors vectors_array[],int size);

int main(){
    int j;
    
    printf("Enter the number of vectors to calculate:");
    scanf("%d",&j);
    struct vectors vectors_array[j];
    for(int i = 0;i<=j-1;i++){
        printf("Enter the x component for %dth vector: ",i+1);
        scanf("%d",&vectors_array[i].x);
        printf("Enter the y component for %dth vector: ",i+1);
        scanf("%d",&vectors_array[i].y);
    }
    complex(vectors_array,j);
    return 0;
}

void complex(struct vectors vectors_array[],int size){
    struct vectors sum = {0,0};
    for (int i = 0; i <= size-1; i++)
    {
        sum.x += vectors_array[i].x;
        sum.y += vectors_array[i].y;

    }
    
    printf("The sum of the %d vectors are %dx+%dy",size, sum.x,sum.y);
}
