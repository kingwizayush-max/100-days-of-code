#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
};

int main() {
    FILE *file;
    struct Student student;
    int searchRoll, found = 0;
    
    file = fopen("students.dat", "rb");
    
    if (file == NULL) {
        printf("Error: File 'students.dat' not found!\n");
        printf("Please create the file first with student data.\n");
        return 1;
    }
    
    printf("Enter roll number to search: ");
    scanf("%d", &searchRoll);
    
    // Read and search
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.roll_no == searchRoll) {
            printf("\nStudent found:\n");
            printf("Roll Number: %d\n", student.roll_no);
            printf("Name: %s\n", student.name);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student with roll number %d not found.\n", searchRoll);
    }
    
    fclose(file);
    
    return 0;
}

