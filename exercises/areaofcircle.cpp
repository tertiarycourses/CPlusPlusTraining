#include <iostream>
using namespace std;

double areaofcircle(double r);

int main(void) {

    double a;
    
    a = areaofcircle(2);
    printf("a = %0.2f\n",a);
}


double areaofcircle(double r){
    
    double pi = 3.1417;
    return pi*r*r;
    
    
}
