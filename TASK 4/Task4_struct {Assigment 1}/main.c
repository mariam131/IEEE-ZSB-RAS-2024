
#include <stdio.h>
#include <string.h>

  //Assignment 1
 //crate a struct named student_info which stores the roll number , name ,age ,address and marks of 15 students then write a program
//the prints all the info related to each of the 15 students
struct student_info {
    int roll_number;
    char name[100];
    int age;
    char address[100];
    float marks[5];
};

int main() {
    const int num_students = 15;
    struct student_info students[num_students];

    for (int i = 0; i < num_students; i++) {
        printf(" student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        scanf("%d", &students[i].age);
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);
        printf("Enter %d marks (separated by spaces): ", (int)sizeof(students[i].marks) / sizeof(students[i].marks[0]));
        for (int j = 0; j < sizeof(students[i].marks) / sizeof(students[i].marks[0]); j++) {
            scanf("%f", &students[i].marks[j]);
            printf(" \n\n\n");

        }
}

    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n", students[i].address);
        printf("Marks: ");
        for (int j = 0; j < sizeof(students[i].marks) / sizeof(students[i].marks[0]); j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\n\n");
    }

    return 0;
}



  //ASSIGMENT 1 AFTER Req
 //for the previous problem write a function that accept the student_info as an input argument and prints the info of the 15 students
// and returns the number of students with marks less than 12 if the full mark is 20

struct student_info {
    int roll_number;
    char name[100];
    int age;
    char address[100];
    float marks[5];
};

int print_student_info(struct student_info student) {
    int num_low_marks = 0;
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Address: %s\n", student.address);
    printf("Marks: ");
    for (int j = 0; j < sizeof(student.marks) / sizeof(student.marks[0]); j++) {
        printf("%.2f ", student.marks[j]);
        if (student.marks[j] < 12.0) {
            num_low_marks++;
        }
    }
    printf("\n\n");
    return num_low_marks;
}

int main() {
    const int num_students = 15;
    struct student_info students[num_students];
    int total_low_marks = 0;

    for (int i = 0; i < num_students; i++) {
        printf(" student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);
        printf("Enter %d marks (separated by spaces): ", (int)sizeof(students[i].marks) / sizeof(students[i].marks[0]));
        for (int j = 0; j < sizeof(students[i].marks) / sizeof(students[i].marks[0]); j++) {
            scanf("%f", &students[i].marks[j]);
        printf(" \n\n\n");


        }
    }

    printf("\n** Student Information **\n");
    for (int i = 0; i < num_students; i++) {
        total_low_marks += print_student_info(students[i]);
    }

    printf("\nTotal Students with Marks Less Than 12 (out of 20): %d\n", total_low_marks);

    return 0;
}
