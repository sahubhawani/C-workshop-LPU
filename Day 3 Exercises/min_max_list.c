//Write a c program to find both the largest and smallest number in a list of integers

#include <stdio.h> 

int main() 
{  
    int a[10], max, min, n, i; 
  
    
    scanf("%d", &n); 
  
    for (i = 0; i < n; ++i) 
        scanf("%d", &a[i]); 
  
    max = a[0]; 
    min = a[0]; 
  
    for (i = 1; i < n; ++i) { 
        if (a[i] > max) 
            max = a[i]; 
  
        if (a[i] < min) 
            min = a[i]; 
    } 
  
    printf("Maximum element = %d\n", max); 
    printf("Minimum element = %d", min); 
  
    return 0; 
}