#include <iostream>
using namespace std;

//Constants
#define MAX_NAME  30
#define MAX_COLOR 15

//Globally defined struct
struct person{			//5 fields packed into one type
    char firstName[MAX_NAME];
    char lastName[MAX_NAME];
    int age;
    char eyeColor[MAX_COLOR];
    float height;
};

int main(void) {
    
    //citizen is a variable of type person
    struct person citizen;
    citizen.age = 38;
    citizen.height = 5.9;
    strcpy(citizen.lastName,"Johnson");
    strcpy(citizen.firstName,"Sasha");
    strcpy(citizen.eyeColor,"Green");
    
    printf("First name: %s\n",citizen.firstName);
    printf("Last name: %s\n",citizen.lastName);
    printf("Age: %d\n",citizen.age);
    printf("Height: %.1f\n",citizen.height);
    printf("Eye color: %s\n",citizen.eyeColor);
    
    
    return EXIT_SUCCESS;
}


