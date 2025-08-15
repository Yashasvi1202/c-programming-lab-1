#include <stdio.h>
int main()
{
   double bytes, kb, mb, gb;

    // Input bytes
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    // Convert bytes to KB, MB, GB
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    // Output the results
    printf("%.2lf bytes = %.2lf KB\n", bytes, kb);
    printf("%.2lf bytes = %.2lf MB\n", bytes, mb);
    printf("%.2lf bytes = %.2lf GB\n", bytes, gb);

    return 0;
}
