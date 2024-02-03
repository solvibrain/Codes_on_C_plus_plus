#include<iostream>

using namespace std;
int main(){

    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come in the party ."<<endl;
    }
    else if(age==18){
        cout<<"you are kid now ,and you will get the kid paass for the party ."<<endl;
    }
    else{
        cout<<"you can come to the party."<<endl;
    }
    

    return 0;
}