#include <cstdio>

int main(void) {
    //Declarations
    int size = 15;
    int *ptr;
    ptr = &size;
    
    //Use the value at the address stored in the pointer
    printf("Address %x contains %d", ptr, *ptr);
    
    return 0;
}

