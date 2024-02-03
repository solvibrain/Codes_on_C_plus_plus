#include <iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
        int setdata (int val){
            val1=val;

        }
        void display(void){
            cout<<"Value of val1: "<<val1<<endl;

        }
};

class c2{
    int val2;
    friend void exchange(c1 & ,c2 & );
    public:
        int setdata(int val){
            val2=val;

        }
        void display(void){
            cout<<"value of val2 : "<<val2<<endl;
        }
};

void exchange(c1 &x,c2 &y){
    int temp= x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main(){
    c1 a1;
    a1.setdata(3);
    c2 a2;
    a2.setdata(6);
    a1.display();
    a2.display();
    
    
    exchange(a1,a2);
    a1.display();
    a2.display();
 
    
    return 0;
}