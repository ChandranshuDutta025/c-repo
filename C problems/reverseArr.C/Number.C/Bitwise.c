

#include<stdio.h>

int main()
{
    //let's assume the maximum arr size as 100.
    int arr[100], size, odd_count = 0, even_count = 0, i;

    //get array size from the user
    printf("Enter array size\n");
    scanf("%d",&size);

    //get array elements from the user
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);

    /*check each element in the array
     *if its odd, increment odd count
     *else, increment even count
     */

    for(i = 0; i < size; i++)
    {
        if(arr[i] & 1 == 1)
            odd_count++;
        else
            even_count++;
    }

    //print the result
    printf("Odd number count = %d\nEven number count = %d\n",odd_count,even_count);

    return 0;
}