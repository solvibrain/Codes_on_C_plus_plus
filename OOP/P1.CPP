#include <iostream>
using namespace std;

class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        // void setdata(int,int ,int); //This function will set the value of private member of Employee class
        void setdata(){
            cout<<"Enter the value of a, b, and c ::"<<endl;
            cin>>a>>b>>c;
        }
        void getdata(){
            cout<<"THe value of a is "<<a<<endl;
            cout<<"THe value of b is "<<b<<endl;

            cout<<"THe value of c is "<<c<<endl;
            cout<<"THe value of d is "<<d<<endl;
            cout<<"THe value of e is "<<e<<endl;
        }    


};

// void Employee :: setdata(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }




int main(){
    
    Employee Rupesh;
    Rupesh.d = 8;
    Rupesh.e= 7;
    // Rupesh.a=3; //This expressioin cannot be considered as true because we can't access the private memebers directly.
    // Rupesh.setdata(1,2,3);//This line signifies the calling of fuction by passing arguement.
    Rupesh.setdata();
    Rupesh.getdata();
    
    
    
    return 0;
}