#include <cstdio>

int main() {
    
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    for(int i: a) {
        printf("%d ",i*i);
    }
    printf("\n");
    
    return 0;
}
