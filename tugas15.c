#include <stdio.h>
#include <time.h>

int main() {
    struct tm date = {0};  // Initialize date struct

    // Set the date (e.g., 17th October 2024)
    date.tm_year = 2024 - 1900;  // Year since 1900
    date.tm_mon = 8;  // October (months are 0-11)
    date.tm_mday = 16;  // Day of the month

    // Normalize the time (this sets all the correct fields)
    mktime(&date);

    // Get the day and month names
    char dayName[23];
    char monthName[10];

    // Use strftime to format the date into day and month names
    strftime(dayName, sizeof(dayName), "%A", &date);  // Full day name
    strftime(monthName, sizeof(monthName), "%B", &date);  // Full month name

    // Print the results
    printf("Day: %s\n", dayName);
    printf("Month: %s\n", monthName);

    return 0;
}
