#include <iostream>
using namespace std;
template <class T>
class Vector{
    public:
        T *arr;
        int size;
        Vector(int s){
            size=s;
            arr = new T [size];
        }
        T dotproduct(Vector &v ){
            T d=0;
            for(int i=0;i<size;i++){
                d+=this->arr[i]*v.arr[i];
            }
            return d;
        }

};
int main(){
    Vector <float>v1(3);
    for(int i =0;i<v1.size;i++){
        float num;
        cout<<"Enter the coordinate of the vector";
        cin>>num;
        v1.arr[i]=num;
    }
    Vector <float> v2(3);
    for(int i =0;i<v2.size;i++){
        float num;
        cout<<"Enter the coordinate of the vector";
        cin>>num;
        v2.arr[i]=num;
    }

    double a=v1.dotproduct(v2);
    cout<<"Answer of the dotproduct is "<<a<<endl;
     
    return 0;
}