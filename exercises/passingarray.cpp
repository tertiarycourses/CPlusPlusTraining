#include <cstdio>

//Function prototypes
void func1(int array[]);
void func2(int *array);

int main(void) {
    int list[5] = {5,7,9,23,15};
    
    func1(list);
    func2(list);
    
    return 0;
}

void func1(int array[]){
    printf("array[3] = %d\n", array[3]);
}

void func2(int *array){
    printf("array[3] = %d\n", array[3]);
}