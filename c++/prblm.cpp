#include<iostream>
using namespace std;
class shape{
    protected:
    double x,y;
    public:
    void get_data(){
        cout<<"Enter two numbers";
        cin>>x>>y;
    }
};
class rectangle : public shape{
    public:
    void display_Result(){
        float result =x*y;
        cout<<"Area of rectangle="<<result<<endl;
    }
};
class triangle : public shape{
    public:
    void display_result(){
        float result= 0.5*x*y;
        cout<<"Area of triangle ="<<result<<endl;
    }
};
int main(){
    rectangle a;
    a.get_data();
    a.display_Result();
    triangle b;
    b.get_data();
    b.display_result();
    return 0;
}











































































/*
class shape{
public:
int
cout<<"Enter x and y";
cin>>x>>y;

};
class rectangle : public shape{
    int length, breadth;
    public:
    void get_data(void){
        cout<<"Enter length";
        cin>>length;
        cout<<"Enter breadth";
        cin>>breadth;
    }
    void display_area(){
        cout<<"Area of rectangle="<<length*breadth;

    }
};
 class triangle : public shape{
    int base ,height;
    public:
    void get_data(){
        cout<<"Enter base"<<endl;
        cin>>base;
        cout<<"Enter height"<<endl;
        cin>>height;
    }
    void display_area(){
        cout<<"Area of triangle="<<1/2 *base*height;
    }
 };*/