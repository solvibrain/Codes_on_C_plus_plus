#include <iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int a){
            data1=a;
            cout<<"Constructor of Base1 is called"<<endl;
        }
        void print_data1(){
            cout<<"Value of Data 1 is "<< data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int a){
            data2=a;
            cout<<"Constructor of Base2 is called"<<endl;
        }
        void print_data2(){
            cout<<"Value of Data 1 is "<< data2<<endl;
        }
};

class Derived: public Base1,public Base2{
    int data3, data4;
    public:
        Derived(int a, int b, int c, int d):Base1( a),Base2( b){
                    data3=c;
                    data4=d;
                    cout<<"Constructor of Derived is called"<<endl;
        }
        void display(){
            cout<<"Value of data3 is "<<data3<<endl;
            cout<<"Value of data4 is "<<data4<<endl;
        }
};


int main(){ 
    Derived d1(1,3,6,8);
    d1.print_data1();
    d1.print_data2();
    d1.display();
    return 0;
} 