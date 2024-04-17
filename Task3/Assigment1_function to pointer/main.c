//Assigment 1

#include<stdio.h>

int main() {

    int choice,num1,num2;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Enter your choice.");
    scanf("%d",&choice);


   if(choice == 1){
      printf("Enter number 1 =");
      scanf("%d" , &num1 );
      printf("Enter number 2 =");
      scanf("%d" , &num2 );
      printf("Result: %d", num1+num2);

   }else if(choice == 2){
       printf("Enter number 1 =");
       scanf("%d" , &num1 );
       printf("Enter number 2 =");
       scanf("%d" , &num2 );
       printf("Result: %d", num1-num2);
   }else if(choice == 3){
       printf("Enter number 1 =");
       scanf("%d" , &num1 );
       printf("Enter number 2 =");
       scanf("%d" , &num2 );
       printf("Result: %d", num1*num2);

   }else if(choice == 4) {
       printf("Enter number 1 =");
       scanf("%d" , &num1 );
       printf("Enter number 2 =");
       scanf("%d" , &num2 );
      if(num2 != 0)
         printf("Result: %.2f", (float) num1/num2);
      else
         printf("Error! Division by zero not possible.");
   } else
      printf("Error! Invalid choice.");

   return 0;
}




//Assigment 2
/*#include<stdio.h>
void main()
{
    int ch,num1,num2;
    while(1){
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Enter your choice.");
    scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                   printf("Enter number 1 =");
                   scanf("%d" , &num1 );
                   printf("Enter number 2 =");
                   scanf("%d" , &num2 );
                   printf("sum is %d\n\n",num1+num2);
                   break;
                case 2:
                   printf("Enter number 1 =");
                   scanf("%d" , &num1 );
                   printf("Enter number 2 =");
                   scanf("%d" , &num2 );
                   printf("sub is %d\n\n", num1 - num2);
                   break;
                case 3:
                   printf("Enter number 1 =");
                   scanf("%d" , &num1 );
                   printf("Enter number 2 =");
                   scanf("%d" , &num2 );
                   printf("multiple is %d\n\n", num1 * num2);
                   break;
                case 4:
                   printf("Enter number 1 =");
                   scanf("%d" , &num1 );
                   printf("Enter number 2 =");
                   scanf("%d" , &num2 );
                   printf("quotient is %d\n\n",num1/ num2);
                   break;
                case 5:
                   break;
                default:
                   printf("invalid choice.");
                   printf("\n\n");
                   printf("please choose a valid function.");
                   break;

            }
            printf("\n");
            if(ch==5)
                break;
    }
}


#include<stdio.h>

int main() {

    int choice,num1,num2;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n\n");
    printf("Enter your choice.");
    scanf("%d",&choice);


   if(choice == 1){
      printf("Enter number 1 =");
      scanf("%d" , &num1 );
      printf("Enter number 2 =");
      scanf("%d" , &num2 );
      printf("Result: %d", num1+num2);

   }else if(choice == 2){
       printf("Enter number 1 =");
       scanf("%d" , &num1 );
       printf("Enter number 2 =");
       scanf("%d" , &num2 );
       printf("Result: %d", num1-num2);
   }else if(choice == 3){
       printf("Enter number 1 =");
       scanf("%d" , &num1 );
       printf("Enter number 2 =");
       scanf("%d" , &num2 );
       printf("Result: %d", num1*num2);

   }else if(choice == 4) {
       printf("Enter number 1 =");
       scanf("%d" , &num1 );
       printf("Enter number 2 =");
       scanf("%d" , &num2 );
      if(num2 != 0)
         printf("Result: %.2f", (float) num1/num2);
      else
         printf("Error! Division by zero not possible.");
   } else
      printf("Error! Invalid choice.");

   return 0;
}
