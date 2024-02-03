#include <iostream>
#include<cmath>// imported because we want to use the function of maths class .  
using namespace std;

class coordinate{
    int x,y;
    public:
        coordinate(int a, int b){
            x=a;
            y=b;

        }
        friend double distance_result(coordinate, coordinate);

};
// function for calculating the distance between the two points . 
double distance_result(coordinate c1,coordinate c2){  
    double sum_of_square=pow((c2.x-c1.x),2) + pow((c2.y-c1.y),2);// using the method of maths clas s.
    return sqrt(sum_of_square);
}

int main(){
    coordinate c1(8,9),c2(9,8);
    double result=distance_result(c1,c2);
    cout<<"Distance between the two coordinate is "<<result<<endl; 
    
}
