#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double a = 3.33333;
    double b = 5.555555;
    double c = a + b;
    
    cout << setprecision(2) << fixed;
    cout << "The sum of " << a << " and " << b << " is " << c << endl;
    return 0;
}
