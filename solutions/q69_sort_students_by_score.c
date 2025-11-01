#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float score;
};

int main() {
    struct Student students[5], temp;
    
    // Read student data
    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Score: ");
        scanf("%f", &students[i].score);
    }
    
    // Sort by score in descending order using bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (students[j].score < students[j + 1].score) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    
    // Display sorted students
    printf("\nStudents sorted by score (descending):\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s - %.2f\n", i + 1, students[i].name, students[i].score);
    }
    
    return 0;
}

