#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
};

int main() {
    int n;
    struct Student *students;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Dynamically allocate array of Student structures
    students = (struct Student *)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Read student data
    printf("\nEnter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        getchar();
        gets(students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
    }
    
    // Display student data
    printf("\nStudent Details:\n");
    printf("----------------\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Name = %s, ID = %d\n", 
               i + 1, students[i].name, students[i].id);
    }
    
    // Free allocated memory
    free(students);
    
    return 0;
}

