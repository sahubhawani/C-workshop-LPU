#include<stdio.h>
int main(){

    int n=1;
    int sum=0;

    while (sum<100000)
    {
        sum = sum +n;
        n=n+1;
    }
    printf("%d",n);

    return 0;
}