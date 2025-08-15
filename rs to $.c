#include <stdio.h>
int main()
{
    float rupees, dollars;

    // Input rupees
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);

    // Convert rupees to dollars
    dollars = rupees / 48;

    // Output the result
    printf("%.2f rupees is equal to %.2f dollars.\n", rupees, dollars);

    return 0;

}
