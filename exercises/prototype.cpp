#include <cstdio>
using namespace std;

double func(double, double);  //prototype

int main(void) {
    double result = func(10,20);
    printf("result = %lf\n", result);
    
    return 0;
}

double func(double x, double y){
    return x*y;
}
