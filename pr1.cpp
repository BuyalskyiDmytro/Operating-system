#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char first_name[50];
    char last_name[50];
    int age;
} Student;

Student students[MAX_STUDENTS];
int num_students=0;

void display_info() {
    printf("Total number of students: %d\n", num_students);
}

void add_student() {
    if (num_students<MAX_STUDENTS) {
        printf("Enter first name ");
        scanf("%s", students[num_students].first_name);

        printf("Enter last name ");
        scanf("%s", students[num_students].last_name);

        printf("Enter age ");
        scanf("%d", &students[num_students].age);

        num_students++;
        printf("Student added successfully.\n");
    } else {
        printf("Maximum number of students reached.\n");
    }
}

void show_students() {
    printf("List of students:\n");
    for (int i=0;i<num_students;i++) {
        printf("Student %d:\n", i+1);
        printf("First Name: %s\n", students[i].first_name);
        printf("Last Name: %s\n", students[i].last_name);
        printf("Age: %d\n", students[i].age);
    }
}

int main() {
    char choice;
    do {
        printf("Options:\n");
        printf("1. Info\n");
        printf("2. Add\n");
        printf("3. Show\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                display_info();
                break;

            case '2':
                add_student();
                break;

            case '3':
                show_students();
                break;

            case '4':
                printf("Exiting the program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    } while (choice!='4');

    return 0;
}