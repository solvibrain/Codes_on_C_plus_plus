#include<iostream>
using namespace  std;
int count=0;
class destructor{
    public:
        destructor(){
            cout<<"this is the creation of number"<<count<<endl;
            count++;
        }
        ~destructor(){
            cout<<"this is the destruction started"<<count<<endl;
            count--;
        }
};
int main(){
    destructor d1;
    {
        cout<<"Entering the block of the main Programme"<<endl;
        destructor d2,d3;
        cout<<"Exiting the main programme"<<endl;
    }
    cout<<"Time for calling the destructor function "<<endl;
    return 0;



}