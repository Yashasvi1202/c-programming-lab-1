#include <stdio.h>
int main()
{
     float dollars, rupees;

    // Input dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * 48;

    // Output the result
    printf("%.2f dollars is equal to %.2f rupees.\n", dollars, rupees);
    return 0;
}
