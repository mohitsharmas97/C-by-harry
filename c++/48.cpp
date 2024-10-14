#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 class constructor called";
    }
    void printDataBase1(void){
        cout<<"The value of data1 is"<<data1<<endl;
    }
};
class Base2{
    int data2;
    public:
     Base2(int i){
        data2=i;
        cout<<"Base2 class constructor called"<<endl;
     }
     void printDataBase2(void){
        cout<<"The value of data2 is"<<data2<<endl;
     }
};
class derived : public Base2 ,public Base1{
    int derived1 ,derived2;
    public:
    derived(int a, int b, int c, int d): Base2(b), Base1(a){
        derived1=c;
        derived2=d;
}
void printDataderived(void){
    cout<<"The value of derived1 is"<<derived1<<endl;
    cout<<"The value of derived2 is"<<derived2<<endl;
}
}; 
int main(){
    derived mohit(1,4,6,7);
    mohit.printDataBase1();
    mohit.printDataBase2();
    mohit.printDataderived();
    return 0;
}
