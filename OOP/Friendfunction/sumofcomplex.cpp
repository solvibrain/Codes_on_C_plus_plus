#include <iostream>
using namespace std;
class complex;
class calculator{
    public:
        int sumrealcomplex(complex , complex);
        int sumcompcomplex(complex, complex);
};
class complex{
    int a , b;

    public:
        void setdata(int a1, int b1){
            a=a1;
            b=b1;

        }
        void display(){
            cout<<"Your comlex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        // individually declaring function of other class as a friend.
        friend int calculator ::sumcompcomplex(complex, complex);
        friend int calculator ::sumrealcomplex(complex, complex);
        // Alter method to declaring whole class as a friend;
        // friend class class name;  

};
int calculator ::sumcompcomplex(complex c, complex d){
    return (c.b + d.b);
}
int calculator ::sumrealcomplex(complex c, complex d){
    return (c.a + d.a);
}

int main(){
    int e,f,g,h;
    cout<<"Enter the number for the complex number : "<<endl;
    cin>>e;
    cin>>f;
    cout<<"Enter the number for the complex number : "<<endl;
    cin>>g;
    cin>>h;
    complex c1,c2;
    c1.setdata(e,f);
    c2.setdata(g,h);
    calculator calc;
    int res= calc.sumrealcomplex(c1,c2);
    cout<<"Sum of the real part of the complex number is"<<res<<endl;
    return 0;
}