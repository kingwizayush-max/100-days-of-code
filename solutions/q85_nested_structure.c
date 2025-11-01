#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int employee_id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.employee_id);
    
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);
    
    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.employee_id);
    printf("Joining Date: %02d/%02d/%04d\n", 
           emp.joining_date.day, 
           emp.joining_date.month, 
           emp.joining_date.year);
    
    return 0;
}

