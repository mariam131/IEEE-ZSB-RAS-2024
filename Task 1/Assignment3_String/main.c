#include <stdio.h>
#include <stdlib.h>

//question 1

int main() {
    char str[100];

    printf("Enter a string you want to enter: ");
    gets(str);
      //or   fgets(str, sizeof(str), stdin);

    printf("You entered: %s\n", str);

}





//Question 2
/*
int main() {
    int i;
    char str[100];

    printf("Enter a string you want to enter: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

}
*/






//Question 3
/*
int comparestr(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] < str2[i]) {
        return -1;
    } else {
        return 1;
    }
}

int main() {
    int i;
    char str1[100];
    char str2[100];

    printf("Enter a string one you want to enter:  ");
    gets(str1);

    printf("Enter a string two you want to enter:  ");
    gets(str2);

    int result = comparestr(str1 ,str2);

    if(result == 0){
        printf("equal");
    }else if(result <0){
        printf("str2 greater");
    }else{
        printf("str1 greater");
    }
    }
*/





//Question 4
/*
int main() {
    int i;
    char str1[100];
    char str2[100];


    printf("Enter a string one you want to enter:  ");
    gets(str1);

    strcpy(str2 , str1);

    printf("first input string from user %s  \n", str1);
    printf("second copied string %s  \n ", str2);

    }
*/
