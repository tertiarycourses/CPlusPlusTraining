#include <cstdio>

class Box {
private:
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



int main()
{
    Box box1, box2, box3;
    
    box1.setdimension(3,3,3);
    
    box2.setdimension(4,4,4);
    
    box3.setdimension(5,5,5);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    v = box2.volume();
    printf("The volume of Box 2 is %d\n",v);
    
    v = box3.volume();
    printf("The volume of Box 3 is %d\n",v);
    
    return 0;
}

