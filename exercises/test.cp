#include <cstdio>
#include <string>
using namespace std;

// -- interface --
class Animal {
private:
    string _color;
    
public:
    Animal();
    void getColor(string);
    void showColor();
};

// -- implementation --
void Animal::getColor(string color) {
    _color = color;
}

void Animal::showColor(){
    puts(_color);
}

int main() {
    Animal A1;
    
    A1.getColor("black");
    A1.showColor();
    
    return 0;
}