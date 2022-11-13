#include <stdio.h>

void changeValue(int *x, int *y){
    *x=14;
    *y=12;
}

int main(){

int x=5;
int y=7;
int *xa =&x;
int *ya =&y;

changeValue(xa,ya);

printf("%d, %d", x, y);

return 0;

}