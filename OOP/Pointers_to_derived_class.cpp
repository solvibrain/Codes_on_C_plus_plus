#include<iostream>
using namespace std;
class Base{
    public:
        int var_base;
        void getdata(){
            cout<<"value of var_base is "<<var_base<<endl;
        }
};
class Derivd : public Base{
    public:
        int derivd_bse;
        void getdata(){
            cout<<"value of var_base is "<<var_base<<endl;
            cout<<"value of derived_base is "<<derivd_bse<<endl;
        }
        
};
int main(){
    Base *base_class_pointer;
    Derivd *derived_class_pointer;
    Base base_object;
    Derivd derived_object;
    base_class_pointer= & derived_object;//pointing base class pointer to the derived class object but it can only acces to the function of the base class.
    base_class_pointer->var_base=78;
    base_class_pointer->getdata();
    derived_class_pointer=&derived_object;/* pointing derived class pointer to the derived class object and 
                                                it can access the its all methods along with the function of the base class.*/
    derived_class_pointer->derivd_bse=63;
    derived_class_pointer->var_base=45;
    derived_class_pointer->getdata();
    


    
    return 0;
}