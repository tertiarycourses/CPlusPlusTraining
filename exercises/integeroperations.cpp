#include <cstdio>
//using namespace std;


int main(void) {
    int x = 5;
    int y = 7;
    int sum, difference, product, division, modulus, increment, decrement;
    
    sum = x + y;
    printf("If x=%d and y=%d then:\n",x,y);
    printf("sum = %d \n",sum);
    
    difference = x - y;
    printf("difference = %d \n",difference);
    
    product = x * y;
    printf("product = %d \n",product);
    
    division = x / y;
    printf("division = %d \n",division);
    
    modulus = x % y;
    printf("modulus = %d \n",modulus);
    
    increment = ++x;
    printf("increment x = %d \n",increment);
    
    decrement = --x;
    printf("decrement = %d \n",decrement);
    
    puts("----------------------------------------");
    
    //Note the difference between ++x and x++
    x = 1;
    ++x;
    printf("x = %d\n", x);
    printf("x = %d\n", x++);
    printf("x = %d\n", x);
    puts("----------------------------------------");
    
    //Note the difference between --x and x--
    x = 1;
    --x;
    printf("x = %d\n", x);
    printf("x = %d\n", x--);
    printf("x = %d\n", x);
    
    return 0;
}