#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Function to print Student structure details
void printStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll_number);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student student;
    
    printf("Enter student details:\n");
    printf("Roll number: ");
    scanf("%d", &student.roll_number);
    printf("Name: ");
    getchar();
    gets(student.name);
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    // Demonstrate passing structure to function
    printStudent(student);
    
    return 0;
}

