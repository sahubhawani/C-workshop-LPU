#include<stdio.h>
int main(){
 char alpha ='c';

 switch (alpha)
 {
 case 'a':
    printf("Hello A");
    break;
case 'b':
    printf("Hello B");
    break;
case 'c':
    printf("Hello c");
    break;
 
 default:
    printf("Not a suitable input");
    break;
 }

return 0;
}