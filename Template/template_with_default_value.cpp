#include <iostream>
using namespace std;
template<class T1=int,class T2=float>
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
    Sample <>s1(6,5.4);//this will take the default value.
    s1.display();
    Sample<char,int>s2('c',5);//Template will take the datatype as priority.
    s2.display();
    
    return 0;
}