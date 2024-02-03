#include <iostream>
using namespace std;

int moneyreturn(int currentmoney,float rate=1.06){
    return currentmoney*rate;
}
int main(){

    int money=7845412;
    cout<<"Money you get for your prinicipal amount "<<money<<" is "<<moneyreturn<<"after 1 year"<<endl;
    
    
    
    return 0;
}