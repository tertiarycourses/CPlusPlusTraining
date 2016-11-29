#include <iostream>
using namespace std;

class Line
{
public:
    Line();  // This is the constructor
    
};

Line::Line(void)
{
    cout << "Object is being created" << endl;
}

int main( )
{
    Line line;
    return 0;
}