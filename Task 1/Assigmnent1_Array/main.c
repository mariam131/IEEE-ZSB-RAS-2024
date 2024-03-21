#include <stdio.h>
#include <stdlib.h>


//Question1 : write program to count total number of duplicate elements in an array

int main()
{
  int arr[100],i,n,j;
  int count=0;

  printf("enter number of element of array");
  scanf("%d",&n);

  printf("enter array");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("check duplicate element");
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
  }
  printf("Total number of duplicate : %d\n", count);

}


//Question 2 : write program to print all unique elements in an array
/*
int main()
{
  int arr[100],i,n,j, isunique;

  printf("enter number of element of array");
  scanf("%d",&n);

  printf("enter element of array");
  for( i=0 ; i<n ; i++ ){
    scanf("%d",&arr[i]);
  }

  printf("check unique element\n");
  for( i=0 ; i<n ; i++ ){
    isunique = 1;
    for( j=i+1 ; j<n ; j++ ){
        if( arr[i] == arr[j] ){
            isunique=0;
            break;
        }
    }

  if (isunique) {
    printf("%d ", arr[i]);
  }
  }

}
*/





//Question 3 :write code that define a function taking an array as an input argument and counting the frequency of each element of an array
/*
void countfrequency (int arr[], int n){
    int i, j ,count;

    int freq[n];
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }

    for(i=0 ;i<n ;i++){
        count=1;
        for(j=i+1; j<n ;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = -1;
            }
    }
    freq[i] = count;
    }
    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != -1) {
            printf("%d\t\t%d\n", arr[i], freq[i]);
        }}}

int main()
{
   int i,n;
   printf("Enter number of element   ");
   scanf("%d",&n);

   int arr[n];
   printf("enter element of array   ");
   for (i=0 ; i < n ; i++){
        scanf("%d",&arr[i]);
   }
   countfrequency(arr ,n);
}
*/







//Question 4 : write program to add numbers using call by reference
/*
void addnumbers(int *x,int *y){
    *x=*x+*y;
}

int main()
{
    int num1,num2,z;
    printf("Enter two number");
    scanf("%d %d", &num1, &num2);
    addnumbers(&num1,&num2);
    printf("sum of two numbers equal =%d",num1);


}
*/

