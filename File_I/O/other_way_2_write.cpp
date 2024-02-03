#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("Sample.txt");
    out<<"Rupesh is best human being.\n";
    out<<"he is doing great work ";

    out.close();

    ifstream in;
    in.open("Sample.txt");
    string s2;
    // in>>s2;
    // cout<<s2;  This is a methodd to read a single string from the file 
    while(in.eof()==0){
        getline(in,s2);
        cout<<s2;
    }
    in.close();
    
    return 0;
}