#include <cstdio>
#define PI 3.1417

double area(double r){
    return PI*r*r;
}
int main()
{
    double r = 2.0;
    double a = area(r);
    
    printf("Area of a circle with radius 2 is %0.2f\n", a);
    return 0;
}
