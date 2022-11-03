//Write a c program to find factorial of a given integer using recursive function
#include <stdio.h> 

int fact(int n) 
{ 
    if (n == 0) {
        return 1;
    } 
    return n * fact(n - 1); 
} 
   
int main() 
{ 
    int num;
    printf("Please enter a number.\n");
    scanf("%d", &num); 
    printf("Factorial of %d is %d", num, fact(num)); 
    return 0; 
}