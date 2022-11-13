#include<stdio.h>
int main(){
    int x=0;
    int y=1;
    printf("%d\n",x);
    printf("%d\n",y);
    int z;

    for (int i=0; i<10; i++)
    {
        z=x+y;
        x=y;
        y=z;
        
        printf("%d\n",z);
    }

return 0;
}