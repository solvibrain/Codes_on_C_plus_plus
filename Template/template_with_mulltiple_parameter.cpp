#include <iostream>
using namespace std;
/*
class Template with multiple parameter
Syntax for the such templateis :
template <T1,T2,such many more>
Template may be the class datatype also.
*/
template < class T1, class  T2>
class Sample{
    T1 data1;
    T2 data2;
    public:
        Sample(T1 a, T2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<"value of data1 is "<<data1<<endl;
            cout<<"value of data2 is "<<data2;
            

        }
        
};
int main(){
    Sample <float, float> s1(2.3,5.6);
    s1.display();
    
    return 0;
    }