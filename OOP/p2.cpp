#include <iostream>
#include <string.h>
using namespace std;

class binary{

    string s;

    public:
        void read(void);
        void check(void);
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter the String : "<<endl;
    cin>>s;
    check();
}

void binary :: check(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"string is  not in binary format"<<endl;
            exit(0);
        }
       
    }
    ones_compliment();    
}

void binary :: ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary :: display(void){
    cout<<"Displaying the number"<<endl;
    for(int i=0;i < s.length();i++){
        cout<<s.at(i);
    }

    cout<<endl;
}


int main(){
    binary b;
    b.read();
    // b.check();
    b.display();
    // b.ones_compliment(); This can also be used by nesting member function.
    b.display();
    
    
    
    return 0;
}