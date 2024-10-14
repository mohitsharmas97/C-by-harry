#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"Your roll no is"<<roll_no<<endl;
    }
};
class test : virtual public student{
    protected:
    float maths ,physics;
    public:
    void set_marks(float m1, float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"Your marks in maths"<<maths<<endl
             <<"your marks in physics"<<physics<<endl;
    }
};
class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"Your PT score is "<<score<<endl;
    }
};
class result : public test ,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics +score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is:"<<total<<endl;
    }
};
int main(){
    result mohit;
    mohit.set_number(54);
    mohit.set_marks(85,44);
    mohit.set_score(5);
    mohit.display();
    return 0;
}