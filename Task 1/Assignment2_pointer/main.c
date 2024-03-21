#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 1 , y = 2 ,z = 3 ;
    int *p , *q , *r , *s , *t ;

    p = &x ;
    q = &y ;
    r = &z ;

    printf("the value of x = %d \n", x);
    printf("the value of y = %d \n", y);
    printf("the value of z = %d \n", z);

    printf("the value of address p = %d  \n", p);
    printf("the value of address q = %d  \n", q);
    printf("the value of address r = %d  \n", r);

    printf("the value of *p = %d \n", *p);
    printf("the value of *q = %d \n", *q);
    printf("the value of *r = %d \n", *r);

    printf("\n");
    printf("swapping pointers \n");
    printf("\n");

    r=p;
    p=q;
    q=r;

    printf("the value of x = %d \n", x);
    printf("the value of y = %d \n", y);
    printf("the value of z = %d \n", z);

    printf("the value of address p = %d  \n", p);
    printf("the value of address q = %d  \n", q);
    printf("the value of address r = %d  \n", r);

    printf("the value of *p = %d \n", *p);
    printf("the value of *q = %d \n", *q);
    printf("the value of *r = %d \n", *r);

    }

