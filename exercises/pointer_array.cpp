#include <cstdio>

int main(void) {
    int data[] = {15, 20, 30, 45, 60, 80};
    
    int *ptr = data;  //ptr points to start of array
    printf("data[] starts at address %x with value %d\n", ptr, *ptr);
    
    //Calculate the length of the array
    int numElements = sizeof(data) / sizeof(int);
    printf("There are %d elements in data[]\n", numElements);
    
    for(int i=0; i<numElements; i++){
        printf("Address %x stores value %d\n", ptr, *ptr);
        ptr++;
    }
    
    return 0;
}

