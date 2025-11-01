#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    FILE *file;
    struct Employee emp;
    
    file = fopen("employees.dat", "rb");
    
    if (file == NULL) {
        printf("Error: File 'employees.dat' not found!\n");
        return 1;
    }
    
    // Use fseek to jump directly to the 5th record (0-indexed, so 4th index)
    // Each record is sizeof(struct Employee) bytes
    fseek(file, 4 * sizeof(struct Employee), SEEK_SET);
    
    // Read the 5th record
    if (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("5th Employee Record:\n");
        printf("ID: %d\n", emp.id);
        printf("Name: %s\n", emp.name);
        printf("Salary: %.2f\n", emp.salary);
    } else {
        printf("Error: Could not read 5th record. File may have fewer than 5 records.\n");
    }
    
    fclose(file);
    
    return 0;
}

