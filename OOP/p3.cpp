#include <iostream>
using namespace std;


class shop{

    int itemid[10];
    int itemprice[10];

public:
    void getprice();
    void displayprice();

};

void shop :: getprice(void){
    
    for(int i=0;i<5;i++){
    
    cout<<"Enter the price of the item : "<<endl;
    cin>>itemid[i];
    cout<<"Enter the itemid for the product : "<<endl;
    cin>>itemprice[i];
    }

}

void shop :: displayprice(void){
    for(int i=0;i<5;i++){
        cout<<"Itemid of the product"<<i+1<<" is "<<itemid[i]<<endl;
        cout<<"price of the product"<<i+1<<" is "<<itemprice[i]<<endl;
        cout<<"***************************************"<<endl;
    }
}
int main(){
    shop dukan;
    dukan.getprice();
    dukan.displayprice();    
    
    
    
    
    return 0;
}