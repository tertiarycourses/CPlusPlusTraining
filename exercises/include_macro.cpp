#include <cstdio>
#include "mylib.h"

int main()
{
    Square_Box box1;
    
    box1.setdemension(10);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    return 0;
}