#include <iostream>
using namespace std;
int fabonacci(int );
int main(){

    int n;
    cout<<"Enter the number for which you want the factorial : "<<endl;
    cin>>n;
    cout<<"The fabonacci of "<<n<<" is "<<fabonacci(n)<<endl;

    
    
    
    return 0;
}
int fabonacci(int a ){
    if(a==1 || a==0){
        return 1;
    }
    
    return fabonacci(a-2)+fabonacci(a-1);
}