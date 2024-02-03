 #include <iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
        int setdata(int value){
            data = value;

        }
        friend void sum(X ,Y);
};

class Y{
    int num;
    public:
        int setdata( int value){
            num=value;

        }
        friend void sum(X,Y);
};

void sum(X o1,Y o2){
    cout<<"The value of the sum of the two number is "<<o1.data + o2.num<<endl;
}
int main(){
    int c,d;
    cout<<"Enter the num1 :"<<endl;
    cin>>c;
    cout<<"Enter the num2 :"<<endl;
    cin>>d;
    
    X a1;
    a1.setdata(c);
    Y a2;
    a2.setdata(d);
    sum(a1,a2);
    
    
    return 0;
}