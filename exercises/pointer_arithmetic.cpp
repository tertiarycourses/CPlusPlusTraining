#include <cstdio>

int main(void) {
    int sizes[] = {15, 20, 30};
    
    int *ptr = sizes;  //ptr points to start of array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    ptr++; //point to the second value in the array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    ptr++; //point to the third value in the array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    ptr--;
    ptr--;//point to the first value in the array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    return 0;
}
