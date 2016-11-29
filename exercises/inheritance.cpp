#include <cstdio>

class Box {
    
protected:
    int height;
    int width;
    int length;
    
public:
    
    void setdimension(int h, int w, int l){
        height = h;
        width = w;
        length = l;
        
    }
    int volume(){
        return height*width*length;
    }
    
    
};

class Square_Box : public Box {
    
public:
    void setdemension(int l) {
        height = l;
        width = l;
        length = l;
    }
    
    
};

int main()
{
    Square_Box box1;
    
    box1.setdemension(10);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    return 0;
}