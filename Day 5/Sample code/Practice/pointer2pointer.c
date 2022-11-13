#include<stdio.h>

int main(){

int a, *p1, **p2; //all the double-asterisk means. It means “pointer-to-pointer
a=100;
p1 = &a;
p2 = &p1;
printf("%d , %d , %d , %d , %d", a,*p1,**p2,p1,p2);


return 0;
}


