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
