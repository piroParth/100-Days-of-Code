#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // Remaining minutes
    seconds = totalSeconds % 60;           // Remaining seconds

    // Output
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
