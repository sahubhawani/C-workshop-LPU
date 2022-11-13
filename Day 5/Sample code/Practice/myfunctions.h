void printArray(int array[], int n){
    for (int i=0; i<n;i++){
        printf("%d, ",array[i]);
    }
}

void copyArrayElements(int x[], int y[], int n1, int n2){
    int j=0;
    for (int i=n1; i<=n2; i++)
    {
     y[j]=x[i];
     j++;
    }
}

int findIndex(int x[], int n, int v){
    for (int i=0; i<n; i++){
        if (x[i]==v){
            return i;
        }    
    }
}


void swap(int x[], int i, int j){
    int temp = x[i];
    x[i] = x[j];
    x[j] = temp;
}

