#include <math.h>
#include <stdio.h>
int main(void)
{
    double x = 0;
    printf("Enter number: ");
    scanf("%lf", &x);

    printf("Square root of %lf is equal to %lf\n", x, sqrt(x));
}
