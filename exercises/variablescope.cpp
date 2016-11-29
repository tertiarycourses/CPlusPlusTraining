#include <cstdio>

void func(int a){
    ++a;
    printf("The value of a inside is %d\n",a);
}

int main()
{
    
    int a = 1;
    
    func(a);
    
    printf("The value of a outside is %d\n",a);
    return 0;
}
