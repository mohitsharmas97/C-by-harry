#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int=a;
    }
};
class base3{
    protected:
    int base3int;
    public:
    void set_base3int(int a){
        base3int=a;
    }
};
class derived : public base1,public base2,public base3{
    public:
    void show(){
        cout<<"The value of base 1 is"<<base1int<<endl;
        cout<<"THe value of base 2 is"<<base2int<<endl;
        cout<<"The value of base 3 is"<<base3int<<endl;

    }
};
int main(){
    derived mohit;
    mohit.set_base1int(25);
    mohit.set_base2int(4);
    mohit.set_base3int(56);
    mohit.show();
    return 0;
}