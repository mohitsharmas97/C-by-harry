#include<iostream>
using namespace std;   //Constructor overloading is defined as when one 
                    // class have multiple constructors with different arguements or parameters
class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printNumber(){
        cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1(5,9);
    c1.printNumber();
    complex c2(5);
    c2.printNumber();
    complex c3;
    c3.printNumber();
    return 0;
}