#include <stdio.h>
#include "myfunctions.h"

int main(){
    int array[20] = {1,2,3,4,5,6,7,8};
    printArray(array,8);

    printf("\n");

    int pos =2;

    for (int i = pos; i<8; i++){
        array[i] = array[i+1];

    }

    printArray(array,8);
    printf("\n");

    for (int i=6; i>=pos; i--){
        array[i+3]=array[i];
    }

    array[pos]=10;
    array[pos+1]=10;
    array[pos+2]=10;

    printArray(array, 11);




return 0;
}