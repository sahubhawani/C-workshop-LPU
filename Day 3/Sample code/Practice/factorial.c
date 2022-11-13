#include<stdio.h>

int main(){
    
    int n;
    printf("PLease enter a number");
    scanf("%d", &n);

    int result =1;

    for (int i=1; i<=n; i++){
        result = result*i;
    }

    printf("The factorial of %d is %d", n, result);


return 0;
}