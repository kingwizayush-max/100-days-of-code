#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    int marks[5];
};

int main() {
    struct Student student;
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    
    printf("Enter name: ");
    getchar();
    gets(student.name);
    
    printf("Enter marks in 5 subjects: ");
    int total = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
        total += student.marks[i];
    }
    
    float percentage = (float)total / 5;
    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", student.marks[i]);
    }
    printf("\nTotal Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}

