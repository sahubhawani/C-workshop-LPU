// Check whether the given number is inside the range 0 to 100 or not.

#include<stdio.h>

int main(){
int x;

scanf("%d",&x);

if (x<100) {
    if (x>0)
    {
        printf("The given is inside the range");
    }
    
}
else{
    printf("The number is out side the range.");
}
return 0;

}