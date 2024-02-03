#include <iostream>
using namespace std;
int a=72;
int main(){

    int a=78,b=43;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The global value of a is "<<::a<<endl;

    float d = 78.3;
    long double e=21.32;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
    cout<<"The size of 78.3"<<sizeof(78.3)<<endl;
    cout<<"The size of 21.32"<<sizeof(21.32)<<endl;
    cout<<"The size of 78.3f"<<sizeof(78.3f)<<endl;
    cout<<"The size of 78.3F"<<sizeof(78.3F)<<endl;
    cout<<"The size of 78.3l"<<sizeof(78.3l)<<endl;
    cout<<"The size of 78.3L"<<sizeof(78.3L)<<endl;

    
    return 0;
}