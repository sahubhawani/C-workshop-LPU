#include<stdio.h>
#include "myfunctions.h"

void print2dArray(int x[3][3]){

    for (int i=0;i<3;i++){
        printf("|%d, %d, %d| \n", x[i][0],x[i][1],x[i][2]);
    }
}


int main(){

    int array1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    

    print2dArray(array1);

    


    

    return 0;
}