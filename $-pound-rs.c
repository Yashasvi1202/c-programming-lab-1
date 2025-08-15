#include <stdio.h>
int main()
{
    float dollars, pounds, rupees;

    // Input dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Step 1: Convert dollars to rupees
    rupees = dollars * 48;

    // Step 2: Convert rupees to pounds
    pounds = rupees / 70;

    // Output the result
    printf("%.2f dollars is equal to %.2f pounds.\n", dollars, pounds);

    return 0;
}
