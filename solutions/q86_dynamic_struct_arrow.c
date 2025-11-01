#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student *s;
    
    // Dynamically allocate memory for struct
    s = (struct Student *)malloc(sizeof(struct Student));
    
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Read data using arrow operator
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);
    
    printf("Enter name: ");
    getchar();
    gets(s->name);
    
    printf("Enter marks: ");
    scanf("%f", &s->marks);
    
    // Display data using arrow operator
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
    
    // Free allocated memory
    free(s);
    
    return 0;
}

