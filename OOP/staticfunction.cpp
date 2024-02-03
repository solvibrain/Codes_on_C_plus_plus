#include<iostream>
using namespace std;

class Employee{
    int id;
     static int count; // declaring a static variable in the protam,,,,, for declaring it simply have to use keywordd Static.
                        //Static variable are those variable that can be acces by the every obect.
    public:
        void setdata(void){
            cout<<"Enter the id of the Emplioyee:"<<endl;
            cin>>id;
        }
        void getdata(void){
            cout<<"The id of teh Employee is "<<id<<endl;
            count++;
            cout<<"This is Employee number "<<count<<endl;
        }
        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;//This is the syntax of defining the Static function by simply using a keyword static before the function name.
                                                                    //This function have acces of the static variable only not other .
        }
};

int Employee :: count;//Intializing the static variable by its default value 0.
int main(){
    Employee Amit,harikesh,kapil;
    Amit.setdata();
    Amit.getdata();
    Employee::getcount();//This is the syntax of calling the function in the main function . 

    harikesh.setdata();
    harikesh.getdata();

    kapil.setdata();
   kapil.getdata();
}
