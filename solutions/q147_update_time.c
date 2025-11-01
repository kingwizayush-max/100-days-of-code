#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to advance time by one second
void updateTime(struct Time *t) {
    t->seconds++;
    
    if (t->seconds >= 60) {
        t->seconds = 0;
        t->minutes++;
        
        if (t->minutes >= 60) {
            t->minutes = 0;
            t->hours++;
            
            if (t->hours >= 24) {
                t->hours = 0;
            }
        }
    }
}

int main() {
    struct Time time;
    
    printf("Enter time (hours minutes seconds): ");
    scanf("%d %d %d", &time.hours, &time.minutes, &time.seconds);
    
    printf("Current time: %02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
    
    updateTime(&time);
    
    printf("Time after one second: %02d:%02d:%02d\n", time.hours, time.minutes, time.seconds);
    
    return 0;
}

