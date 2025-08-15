#include <stdio.h>
int main() {
    float grossSales, discount, netSales;

    // Input gross sales
    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);

    // Calculate 10% discount
    discount = grossSales * 0.10;

    // Calculate net sales
    netSales = grossSales - discount;

    // Output results
    printf("Gross Sales = %.2f\n", grossSales);
    printf("Discount (10%%) = %.2f\n", discount);
    printf("Net Sales = %.2f\n", netSales);

    return 0;
}
