#include<iostream>
using namespace std;

class Complex{   // BAsic representation of class 
    int real , complex;
    public:
        void setadata(int a,int b){
            real=a;
            complex=b;
        }
        void getdat(){
            cout<<"value of real is "<<real<<endl;
            cout<<"value of complex is "<<complex<<endl;
        }
};
int main(){
    Complex c1; // Basic Instantce of Object
    // c1.setadata(2,3);
    // c1.getdat();

    Complex* ptr=&c1;
    (*ptr).setadata(7,6); // Accessing Objet with the help of Pointer
    (*ptr).getdat();
    
    Complex *ptr1= new Complex; //using new keyword to Initialize a object
    (*ptr1).setadata(3,6);
    (*ptr1).getdat();

    ptr->setadata(8,9);// Accesing Objec with the help of Arrow operator.
    ptr->getdat();
    return 0;
}