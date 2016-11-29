#include <cstdio>
using namespace std;

int Fibonacci (int n){
    
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}


int main(void){
    
    int numbers=25;
    for(int i=0; i<numbers; i++){
        printf("[%d]: %d\n",i,Fibonacci(i));
    }
    return 0;
}