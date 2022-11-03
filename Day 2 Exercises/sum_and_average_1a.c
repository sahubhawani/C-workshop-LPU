//Write a program to find sum and average of three numbers

#include <stdio.h>
 
int main()
{
    int n1, n2, n3;
    float sum, average;
 
    printf("Enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);
 
    sum = n1 + n2 + n3;
    average = sum/3.0;
 
    printf("Sum of three numbers = %.2f\n", sum);
    printf("Average of three numbers = %.2f\n", average);
 
    return 0;
}