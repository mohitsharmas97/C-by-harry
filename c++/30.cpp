#include<iostream>
#include<conio.h>
using namespace std;
class rectangle{
    private:
    int width;
    int height;
    public:
    rectangle(){
        
        width=0;
        height=0;
    }
    rectangle(int w,int h){    // parameterized constructor is used to pass the arguements......
        width =w;
        height=h;
    }
    int area(){
        return width *height;
    }
    void display(){
        cout<<"width="<<width<<"height="<<height<<endl;
    }
    
    
    
    };
    int main(){
        rectangle rect1;
        rect1.display();
        cout<<"Area of rect1="<<rect1.area();

        rectangle rect2(10,20);
        rect2.display();
        cout<<"Area of rect2="<<rect2.area();

        rectangle rect3(5,33);
        rect3.display();
        cout<<"Area of rect 3="<<rect3.area()<<endl;
        return 0;

    }