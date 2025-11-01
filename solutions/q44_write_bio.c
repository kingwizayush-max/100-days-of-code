#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *file;
    
    printf("Enter your name: ");
    gets(name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Open file in write mode
    file = fopen("bio.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write name and age to file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    
    printf("Information successfully written to bio.txt\n");
    
    fclose(file);
    
    return 0;
}

