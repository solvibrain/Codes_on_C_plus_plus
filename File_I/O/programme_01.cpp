#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s2= " Rupesh you are the genius and unique in the world.";
    cout<<"Enter the String which you want to add in the file "<<endl;
    gets(s2);
    ofstream out("Sample.txt");
    out<<s2; 

    return 0;
}