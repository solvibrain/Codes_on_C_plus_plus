#include <iostream>
using namespace std;

class Emplooyee{
    int id;
    float salary;
    public:
        void getid(void){
            cout<<"Enter the id : "<<endl;
            cin>>id;
        }
        void displayid(void){
            cout<<"The id of the Employee is "<<id<<endl;
        }
};









int main(){
    
    Emplooyee mem[12];
    for(int i=0;i<5;i++){
        mem[i].getid();
        mem[i].displayid();
    }
    
    
    
    return 0;
}