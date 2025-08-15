#include <stdio.h>
int main()
{
    float kilograms, grams;

    // Input kilograms
    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);

    // Convert kilograms to grams
    grams = kilograms * 1000;

    // Output the result
    printf("%.2f kilograms is equal to %.2f grams.\n", kilograms, grams);

    return 0;
