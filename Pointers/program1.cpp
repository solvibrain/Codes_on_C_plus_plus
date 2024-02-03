#include <iostream>
using namespace std;
int main(){
    
    int a =3;
    int *b=&a;
    cout<<"THe address of a is "<<b<<endl;
    cout<<"THe address of a is "<<&a<<endl;
    cout<<"THe Value of a is "<<*b<<endl;
    cout<<"THe Vallue of a is "<<*(&a)<<endl;

    int **c=&b;
    cout<<"The addres of b is "<<&b<<endl;
    cout<<"The addres of b is "<<c<<endl;
    cout<<"The value of b is "<<*c<<endl;
    cout<<"The value of a is "<<**c<<endl;
    
    
    
    
    
    
    return 0;
}