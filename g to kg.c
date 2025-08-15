#include <stdio.h>
int main()
{
    
    float grams, kilograms;

    // Input grams
    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    // Convert grams to kilograms
    kilograms = grams / 1000;

    // Output the result
    printf("%.2f grams is equal to %.2f kilograms.\n", grams, kilograms);

    return 0;

}
