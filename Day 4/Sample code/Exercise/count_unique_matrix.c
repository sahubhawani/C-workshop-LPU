//Write a program to input 20 arbitrary numbers in one dimensional array. Calculate the frequency of each number. Print the number and its frequency in a tabular form.

#include<stdio.h> 
int main() 
{ 
  
    int a[20], i, j, count; 
 
    printf("Enter 20 numbers (1 to 10 only): "); 
    for(i = 0; i < 20; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
 
    for(i = 1; i <= 10; i++) 
    { 
        count = 0; 
        for(j = 0; j < 20; j++) 
        { 
            if(a[j] == i) 
            { 
                count++; 
            } 
        } 
        printf("%d occurs %d times\n",i,count); 
    } 
    return 0; 
}