#include <stdio.h>
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}



int main(){

   int n1,n2;
scanf("%d%d", &n1, &n2);

int res = max(n1,n2);

printf("The maximum number is %d",res);



}




