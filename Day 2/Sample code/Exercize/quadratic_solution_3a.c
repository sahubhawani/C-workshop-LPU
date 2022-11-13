//Write a c program to find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float r1, r2, d;

    printf("Enter coefficients a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);

        printf("Roots are real and different.\n");
        printf("r1 = %.2f  r2 = %.2f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2*a);

        printf("Roots are real and equal.\n");
        printf("r1 = r2 = %.2f", r1);
    }
    else
    {
        printf("Roots are complex.\n");
    }

    return 0;
}