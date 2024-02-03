#include<iostream>
using namespace std;
class Shop{
    int Id;
    float Price;
    public:
        void setdata(int p,float q){
            Id=p;
            Price=q;
        }
        void getdata(){
            cout<<"Id of the Item is "<<Id<<endl;
            cout<<"Price of the Item is "<<Price<<endl;
        }
};
int main(){
    int size;
    cout<<"Enter the number of Object that want to create"<<endl;
    cin>>size;
    Shop *ptr=new Shop[size];
    Shop *ptrtemp=ptr;
    int p,q;
    for(int i=0;i<size;i++){
        cout<<"Enter the Id and price of the Item : "<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int i=0;i<size;i++){
        cout<<"*************************************"<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    cout<<"***************************************"<<endl;

    return 0;
}