#include<iostream>
using namespace std;
//Syntax  for the multiple inheritance is class Derived : visibililty(mode) Base1,visibility(mode) Base2{};
class Base1{
    protected:
        int baseint1;
        public:
           void set_baseint(int a){
               baseint1=a;
           }
};
class Base2{

    protected:
        int Base2int;
        public:
            void set_bseint2(int b){
                Base2int=b;
            }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"the value of Base 1 is "<<baseint1<<endl;
            cout<<"the value of Base 2 is "<<Base2int<<endl;
            cout<<"the value of  sum of Base 1 and Base 2 is "<<Base2int+baseint1<<endl;

        }
};

int main(){
    Derived rupesh;
    rupesh.set_baseint(77);
    rupesh.set_bseint2(41);
    rupesh.show();
    

}