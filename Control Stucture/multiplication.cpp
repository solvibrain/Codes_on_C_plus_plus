#include <iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"Enter the number for which you want the multiplication table : "<<endl;
    cin>>a;
    int i=1;
    do{
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
        i++;
    }while(i<11);
    
    
    return 0;
}