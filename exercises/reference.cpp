#include <cstdio>

void func(int* a){
    ++(*a);
    
}

int main()
{
    
    int a = 1;
    
    func(&a);
    
    printf("The value of a is %d\n",a);
    return 0;
}
