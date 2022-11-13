//Write a c program to perform arithmetic operations using switch statement

#include<stdio.h> 
int main() 
{ 
    float num1, num2;
    int choice; 
    char opt; 
    do
    { 
        printf("\nEnter first number: "); 
        scanf("%f", &num1); 
        printf("\nEnter second number: "); 
        scanf("%f", &num2); 
        printf("\nEnter your choice(1 for addition, 2 for subtraction 3 for multiplication and 4 for division): "); 
        scanf("%d", &choice); 
        switch(choice) 
        { 
            case 1: printf("\n%f + %f = %f", num1, num2, num1+num2); 
                    break; 
            case 2: printf("\n%f - %f = %f", num1, num2, num1-num2); 
                    break; 
            case 3: printf("\n%f * %f = %f", num1, num2, num1*num2); 
                    break; 
            case 4: printf("\n%f / %f = %f", num1, num2, num1/num2); 
                    break; 
            default: printf("\nInvalid Choice!"); 
        } 
        printf("\nDo you want to continue?(y/n): "); 
        scanf(" %c", &opt); 
    }while(opt=='y' || opt=='Y'); 
    return 0; 
}