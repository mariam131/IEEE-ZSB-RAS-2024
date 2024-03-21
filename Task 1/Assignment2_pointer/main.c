#include <stdio.h>
#include <stdlib.h>

//write a c program that define 3 integer variable x , y, z and 5 pointers to integers p, q, r .
//set distinct value to the three variables and set the addresses of variable into three pointers then apply the next
              //1. print with label the values of x,y,z,p,q,r,*q,*r,*s
              //2.and print message swapping pointer then execute the swap code r=p; p=q; q=r;
              //3. print with label the values of x,y,z,p,q,r,*q,*r,*s

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

