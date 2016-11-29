#include <iostream>
using namespace std;

int main(void)
{
    enum Color { RED, GREEN, BLUE };
    Color r = RED;
    switch(r)
    {
        case RED  : cout << "red\n";   break;
        case GREEN: cout << "green\n"; break;
        case BLUE : cout << "blue\n";  break;
    }
}