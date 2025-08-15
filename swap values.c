#include <stdio.h>

int main()
{
    int a, b, temp;

    // Input values
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap using temp variable
    temp = a;
    a = b;
    b = temp;

    // Output result
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
    return 0;
}
