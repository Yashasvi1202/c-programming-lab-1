#include <stdio.h>
int main()
{
  float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
    return 0;
}
