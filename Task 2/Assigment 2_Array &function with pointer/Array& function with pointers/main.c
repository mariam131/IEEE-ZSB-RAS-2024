#include <stdio.h>
#include <stdlib.h>


//Question 1 :write a c function to increment int value and create a pointerto this function then pass an int value to the function using the pointer only

void increment(int *value){
    (*value) ++;
}

int main()
{
    int value = 10;
    int *ptr  = &value ;

    printf("Before increment %d\n\n" ,value);

    increment(ptr);

    printf("after increment %d\n\n" ,value);

    return 0;
}




/*
//Question 2 :  create an array of int values and a pointer pointing to this array then print all the elements of the array using this pointer

int main()
{
    int arr[5] ={1 , 2 , 3 , 4 , 5};
    int *ptr = &arr ;

    printf("print all the element of the array using this pointer\n");
   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {         //   for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) = 5
        printf("%d    ", *(ptr + i));
        printf("\n");

    }

    return 0;
}
*/



