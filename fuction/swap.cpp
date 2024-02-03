#include <iostream>
using namespace std;
void swap(int*,int*);
int main(){
    int a,b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b  : "<<endl;
    cin>>b;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    
    
    
    
    return 0;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

