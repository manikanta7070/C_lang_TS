#include <stdio.h>
int convertToMinutes(int hours, int minutes) {
    return hours * 60 + minutes;
}

int main() {
    int hours, minutes;
    
    printf("Enter hours: ");
    scanf("%d", &hours);
    
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    
    int totalMinutes = convertToMinutes(hours, minutes);
    printf("Total minutes: %d\n", totalMinutes);
    
    return 0;
}
