#include <cstdio>

float add2numbers(float a, float b) {
    
    float z = a + b;
    return z;
}

int main()
{
    float c;
    c = add2numbers(5.6,4.5);
    printf("The sum is %.2f\n",c);
    
    return 0;
}
