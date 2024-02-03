#include <iostream>
using namespace std;
void sum();
int global = 785;
int main(){

    int global=89;
    sum();
    cout<<global;
    
    
    return 0;
}
void sum(){
    cout<<global;
}