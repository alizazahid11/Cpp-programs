#include<iostream>
using namespace std;
class shape{
    protected:
      int height;
      int width;
    public:
    shape(){
        height=0;//null constructor
        width=0;
    }
    shape(int h,int w){//para constructor
        this->height=h;
        this->width=w;

    }
    shape(const shape & p){
        height=p.height;//copy cons
        width=p.width;

    }
    void display(){
        cout<<"height  =  "<<height<<endl;
        cout<<"width    = "<<width<<endl;
    }
    void setHeight(int l){ //setter
        this->height=l;
}
    void setWidth(int b){//setter
        this->width=b;
    }
    int getHeight(){
        return height;
    }
    int getWidth(){
        return width;
    }
    int getmaxarea(){
        return height*width;
    }
};
int main(){
    //shape shape;
    shape c1;
    c1.display();
    shape c2(5,4);
    c2.display();
    shape c3(c2);
    c3.display();
    shape s1;
    s1.setHeight(5);
    s1.setWidth(4);
    cout<<"the height is " <<s1.getHeight()<<endl;
    cout<<"the width is  "<<s1.getWidth()<<endl;
    cout<<"the area is  "<<s1.getmaxarea()<<endl;
    return 0;






}