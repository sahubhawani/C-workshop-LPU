//Write a c program to evaluate algebraic expression (ax+b)/(ax-b)

#include <stdio.h>
int main()
{
    float a, b, x, result;
    printf("Enter the values of a, b and x : ");
    scanf("%f%f%f", &a, &b, &x);
    result = (a * x + b) / (a * x - b);
    printf("Result of (%.2f * %.2f + %.2f) / (%.2f * %.2f - %.2f) is %f", a, x, b, a, x, b, result);
    return 0;
}