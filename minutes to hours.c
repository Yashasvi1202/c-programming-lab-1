#include <stdio.h>

int main()
{
    int minutes;
    float hours;
    // Input minutes
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to hours
    hours = minutes / 60.0; 

    // Output the result
    printf("%d minutes is equal to %.2f hours.\n", minutes, hours);

    return 0;
}
