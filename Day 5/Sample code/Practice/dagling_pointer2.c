// Variable goes out of scope
#include <stdio.h>

int main()  {
    // A pointer that has not been initialized is
    // known as a Wild Pointer, ptr is a Wild Pointer.
    int *ptr; 

    // variables declared inside the block of will get destroyed
    // at the end of execution of this block
    {
        int temp = 10;
        ptr = &temp; // acting as normal pointer
    }

    // temp is now removed from the memory (out of scope)
    // now ptr is a dangling pointer
    //printf("%d %d", *ptr, temp);

    // as temp is not in the memory anymore so it can't be modified using ptr

    // prints garbage value
    printf("%d", *ptr);


    return 0;
}
