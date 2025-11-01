#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;
    
    printf("Enter number of days: ");
    scanf("%d", &totalDays);
    
    years = totalDays / 365;
    int remainingDays = totalDays % 365;
    
    weeks = remainingDays / 7;
    days = remainingDays % 7;
    
    printf("\nConversion:\n");
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    
    printf("\n%d days = %d years, %d weeks, and %d days\n", 
           totalDays, years, weeks, days);
    
    return 0;
}

