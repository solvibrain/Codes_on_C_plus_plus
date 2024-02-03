#include <iostream>
using namespace std;
float sqrt(float);
float cube(float);
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int result = sqrt(n);
    cout<<"The square root for the following number is"<<result<<endl;
    cout<<"The cube of the square for the following number is "<<cube(result)<<endl;
    
    
    
    
    return 0;
}

float sqrt(float a){

    return a*a;
}
float cube(float b){
    return b*b*b;
}