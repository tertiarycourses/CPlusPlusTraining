#include <cstdio>

class Box {

protected:
    int height;
    int width;
    int length;

public:
    
    virtual void setdimension() = 0;
    
    int volume(){
        return height*width*length;
    }


};

class Rectangle_Box: public Box{
public:
    void setdemension(int h,int w) {
        height = h;
        width = w;
        length = w;
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
    Rectangle_Box box2;
    
    box1.setdemension(10);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
        return 0;
}

