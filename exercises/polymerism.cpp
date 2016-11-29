#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape( int a=0, int b=0) // constructor
    {
        width = a;
        height = b;
    }
    int area()
    {
        cout << "Shape Class Area :" <<endl;
        return 0;
    }
};
class Rectangle: public Shape { // inheritance
public:
    Rectangle( int a=0, int b=0):Shape(a, b) { } // constructor for Rectangular
    int area ()
    {
        cout << "Rectangle Class Area :" <<endl;
        return (width * height);
    }
};
class Triangle: public Shape{ // inheritance
public:
    Triangle( int a=0, int b=0):Shape(a, b) { } //constructor
    int area ()
    {
        cout << "Triangle Class area :" <<endl;
        return (width * height / 2);
    }
};
// Main function for the program
int main( )
{
    Rectangle rec(10,7);
    Triangle  tri(10,5);
    
    cout << rec.area() <<endl;
    cout << tri.area() << endl;
    return 0;
}