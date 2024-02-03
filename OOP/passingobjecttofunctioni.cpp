#include <iostream>

using namespace std;

class comp{
    int a;
    int b;
public:
    void setdata(int c,int d){
        a=c;
        b=d;
    

    }    
    void setdatabysum(comp a1,comp a2){
        a=a1.a+a2.a;
        b=a1.b+a2.b;

    }
    void display(){
        cout<<"THe value of the complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    
    
    comp c[3];
    for(int i=0;i<3;i++){

    int e,f;
    cout<<"Enter the value of Imaginary num and real num : "<<endl;
    cin>>e;
    cin>>f;
    
    c[i].setdata(e,f);// Defining objets with the help of array and setting its methods 
    c[i].display();
    

    }
    c[2].setdatabysum(c[0],c[1]);// caliing function in which two objects are passing as a parameter.
    c[2].display();
    return 0;
}