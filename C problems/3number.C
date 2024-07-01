#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input the three numbers here :");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a==b )
    {
       if (b==c)
       {
        printf("All three are equal numbers.");
        return 0;
       }
       else
       {
        if (b<c)
        {
           printf("%d is greater than %d and %d.\n",c,b,a);
           return 0;
        }
        else
        {
              printf("%d , %d is greater than %d.\n",a,b,c);
              return 0;
        }
       }

    }
     if (c==b )
    {
       if (b==a)
       {
        printf("All three are equal numbers.");
        return 0;
       }
       else
       {
        if (b<a)
        {
           printf("%d is greater than %d and %d.\n",a,b,c);
           return 0;
        }
        else
        {
              printf("%d , %d is greater than %d.\n",c,b,a);
              return 0;
        }
       }

    }
     if (a==c )
    {
       if (c==b)
       {
        printf("All three are equal numbers.\n");
        return 0;
       }
       else
       {
        if (b<c)
        {
           printf("%d is greater than %d and %d.\n",b,c,a);
           return 0;
        }
        else
        {
              printf("%d , %d is greater than %d.\n",c,a,b);
              return 0;
        }
       }

    }
    else if(a<b)
    {
        if (b<c)
        {
            printf("%d > %d >%d.",c,b,a);
        }
        else
        {
            if (c>a)
            {
               printf("%d > %d >%d.",b,c,a);
            }
            else
            {
                printf("%d > %d >%d.",b,a,c);
            }
            
        }
    }    
    else if(b < c)
    {
        if(c<a)
        {
            printf("%d > %d >%d.",a,c,b);
        }
        else{
            
            if (b>a)
            {
               printf("%d > %d > %d.",c,b,a);
            }
            else
            {
                printf("%d > %d > %d.",c,a,b);
            }
        }
    }
    else if(c < a)
    {
        if (a < b)
        {
          printf("%D > %d > %d",b,a,c);
        }
        else
        {
            if (c<b)
            {
                printf("%d > %d > %d.",a,c,b);
            }
            else
            {
                printf("%d > %d > %d",a,c,b);
            }
        }   
    }
    
    return 0;
}