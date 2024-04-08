#include <stdio.h>
#include <stdlib.h>




//Question 1:   write a code that define three pointer p1,p2,p3 of type int ,char ,and long then perform the following p1++,p2++,p3++ on them
                                                //then print the reason for each output

int main()
{
    int  *p1 ;
    char *p2 ;
    long *p3 ;

    printf(" Before incremant\n");
    printf(" p1 %p\n" ,p1);
    printf(" p2 %p\n" ,p2);
    printf(" p3 %p\n\n" ,p3);

    p1++;
    p2++;
    p3++;

    printf(" After increment\n");
    printf(" p1 %p\n" ,p1);
    printf(" p2 %p\n" ,p2);
    printf(" p3 %p\n" ,p3);

    printf(" When a pointer is declared without its memory allocated, it may contain an in-memory address.
             When trying to increase the value of this factor, this result is unpredictable" );

    return 0;
}








/*

//Question 2   :write a code that define a pointer "ptr" that points to an integer variable containing HEX value
                              //of 3 byte then perform the following operations *ptr++ , *++ptr , ++*ptr and print the reason for each print


int main()
{
    char hex [3] = {0xAA , 0xBB , 0xCC};
    int  * ptr = (int *)hex;


    printf("Initial value: 0x%X\n", *ptr);

    printf("++*ptr: 0x%X            (Increment the value pointed to by ptr)\n", ++*ptr);
    printf("*ptr++: 0x%X            (Access value, then increment pointer) \n", *ptr++);
    printf("*++ptr: 0x%X            (Increment pointer, then access value: problem ) \n", *++ptr);

    return 0;

}

*/






















