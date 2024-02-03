#include <iostream>
using namespace std;
int fact(int);
int main(){
    
    int n;
    cout<<"Enter the number for which you want the factorial : "<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n)<<endl;

    
    
    
    return 0;
}
int fact(int a){
    if(a==1){
        return 1;
    }
    
    return a*fact(a-1);
}