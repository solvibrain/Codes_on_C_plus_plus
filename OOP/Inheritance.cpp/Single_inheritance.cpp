#include <iostream>
using namespace std;
class Employee{
    int id;
    public:
        float salary;
        void setdata(int a){
            id=a;
            cout<<"Id of the Employe is "<<id<<endl;
        }
};
class Programer : Employee {
    public:
        void accesdata(){
            setdata(3);
        }
};

int main(){
    Employee e1;
    e1.setdata(8);
    Programer p1;
    p1.accesdata();
                                     
    return 0;
}