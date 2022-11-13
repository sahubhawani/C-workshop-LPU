#include<stdio.h>

int max(int array[], int n)
{
    int max;
    max = array[0];

    for (int i=1;i<n;i++)
    {
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;

}

int min(int array[], int n)
{
    int min;
    min = array[0];

    for (int i=1;i<n;i++)
    {
        if (array[i]<min){
            min = array[i];
        }
    }
    return min;

}










int main(){

    int x[6]={1,2,3, 10, 14,5};
    int max_value = max(x,6);
    int min_value = min(x,6);
    printf("The maximum value in the array is: %d", max_value);
    printf("The minimum value in the array is: %d", min_value);

    return 0;
}