//Write a c program to count and display positive, negative, odd and even numbers in an array

#include <stdio.h> 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int i, n = 10; 
    int positive = 0, negative = 0, odd = 0, even = 0; 
  
    for (i = 0; i < n; i++) { 
        if (arr[i] > 0) 
            positive++; 
        else if (arr[i] < 0) 
            negative++; 
        if (arr[i] % 2 == 0) 
            even++; 
        else
            odd++; 
    } 
  
    printf("Positive : %d\n", positive); 
    printf("Negative : %d\n", negative); 
    printf("Odd : %d\n", odd); 
    printf("Even : %d", even); 
    return 0; 
}