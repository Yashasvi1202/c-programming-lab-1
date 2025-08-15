#include <stdio.h>
int main()
{
  float side, area, perimeter;

    // Input side length
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate area and perimeter
    area = side * side;
    perimeter = 4 * side;

    // Output results
    printf("Area of the square = %.2f\n", area);
    printf("Perimeter of the square = %.2f\n", perimeter);

    return 0;
}
