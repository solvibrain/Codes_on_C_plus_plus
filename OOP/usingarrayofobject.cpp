#include <iostream>
using namespace std;

class Emp {
    int id;
    
public:
    void setdata(){
        cout<<"Enter the id of the Employee :"<<endl;
        cin>>id;
    }

    void display(){
        cout<<"The id of the Employee is "<<id<<endl;
    }

};


int main(){

int n;
cout<<"Enter the number of the Employee :"<<endl;
cin>>n;

Emp emp[15];
for(int i=0;i<n;i++){
    emp[i].setdata();
    emp[i].display();

}
    
    
    
    
    
    return 0;
}