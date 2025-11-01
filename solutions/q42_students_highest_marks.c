#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    
    // Read data for 5 students
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        getchar();
        gets(students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    // Find student with highest marks
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    
    // Display student with highest marks
    printf("\nStudent with highest marks:\n");
    printf("Roll Number: %d\n", students[maxIndex].roll_number);
    printf("Name: %s\n", students[maxIndex].name);
    printf("Marks: %.2f\n", students[maxIndex].marks);
    
    return 0;
}

