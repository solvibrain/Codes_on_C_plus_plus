#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setdata(int a1, int b1){
            a=a1;
            b=b1;
        }
        friend complex sumcomplex(complex , complex); // declaring any function to be the friend of the class in which the friend is written.
        void prinit(){
            cout<<"YOur Number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumcomplex(complex c1,complex c2){// it is not the member of the class and it is want to acces the member of the class then for this he have to be friend of that function . 
    complex c3;
    c3.setdata(c1.a+c2.a,c2.b+c2.b);
    return c3;
    
    

}

int main(){
    complex c1,c2,sum;
    c1.setdata(1,5);
    c2.setdata(2,5);
    sum=sumcomplex(c1,c2);//Here i called the function and return the value of c3 in sum . 
    sum.prinit();//calling the method of the class.
    
    
    
    return 0;
}
//properties of friend fnctions 
//1. Not in the scope of the class 

//2.can be invoked without the help of any object.
// it cannot be caled by the object of teh class .
// usually contain object as a arguement   