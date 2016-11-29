#include <cstdio>

void counter(){
    static int a =0;
    ++a;
    printf("%d\n",a);
}

int main()
{
    int a = 5;
    
    for(int i=0;i<10;i++){
        counter();
    }
    
    printf("a outside is %d\n",a);
    return 0;
}
