#include <cstdio>

class Box {
public:
    int height;
    int width;
    int length;
    
    int volume(){
        return height*width*length;
    }
};


int main()
{
    Box box1, box2, box3;
    
    box1.height = 3;
    box1.width = 3;
    box1.length = 3;
    
    box2.height = 4;
    box2.width = 4;
    box2.length = 4;
    
    box3.height = 5;
    box3.width = 5;
    box3.length = 5;
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    v = box2.volume();
    printf("The volume of Box 2 is %d\n",v);
    
    v = box3.volume();
    printf("The volume of Box 3 is %d\n",v);
    
    return 0;
}

