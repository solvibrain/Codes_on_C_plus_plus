#include <iostream>
using namespace std;

double volume(int r, int h){

    return (3.14*r*r*h);
}
double volume(int a){

    return (a*a*a);
}
double volume(int l, int b,int h){

    return (l*b*h);
}



int main(){

    cout<<"The volume of cylinder is "<<volume(2,3)<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of cone is "<<volume(2,3,5)<<endl;
    return 0;
}