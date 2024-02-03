#include <iostream>
using namespace std;

class complex{
    int a ,b;
 public:
    complex(int , int);//constuctor declaration.
    // Creating a Constuctor 
    // Constucto is a special member function having  the same name as of the class.
    // it is used to initialize the objects of its class  
    // It is automatically invoked whenever an object is created
    void printnumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i ."<<endl;
    }
};


complex ::complex(int a1,int b1){// parameterised constructor  
    a=a1;
    b=b1;
}

int main(){
    int a,b;
    cout<<"Enter the number of : "<<endl;
    cin>>a;
    cin>>b;
    complex c1(a,b);// patameterisd Constructor
    c1.printnumber();

    
    
    return 0;
}   