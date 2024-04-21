#include <stdio.h>
#include <stdio.h>
#include <string.h>

  //Assigment 2 - 1
 //using c language write a program to compare two dates entered by the user as strings . make a structure named date to
//store the elements day , month ,year to store the dates are equal , display "dates are equal " other wise display "dates not equal"


struct date {
    int day;
    int month;
    int year;
};

int compare_dates(struct date d1, struct date d2) {
    if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day) {
        return 1;
    } else {
        return 0;
    }}

int main() {
    char date_str1[12], date_str2[12];
    struct date date1, date2;

    printf("Enter the first date (DD-MM-YYYY format): ");
    scanf("%s", date_str1);
    printf("Enter the second date (DD-MM-YYYY format): ");
    scanf("%s", date_str2);

    sscanf(date_str1, "%d-%d-%d", &date1.day, &date1.month, &date1.year);
    sscanf(date_str2, "%d-%d-%d", &date2.day, &date2.month, &date2.year);

    int comparison = compare_dates(date1, date2);
    if (comparison) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}



  //Assigment 2_2
 //using c language create a struct named info that stores the name and age of the person then create an object and
//pointer of the type info then make the pointer pointing to the object after that print the name and age stored in the object but using pointer


struct info {
    char name[100];
    int age;
};

int main() {
    struct info person;


    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);

    struct info *ptr = &person;

    printf("\nName (using pointer): %s\n", ptr->name);
    printf("Age (using pointer): %d\n", ptr->age);

    return 0;
}








