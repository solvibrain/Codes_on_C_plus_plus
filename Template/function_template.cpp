 #include<iostream>
 using namespace std;
 template <class T1, class T2>
 double sum(T1 a, T2 b){
     return a+b;
 }
 
 int main(){
     int x=3;
     double y=5.36987;
     printf("sum of the two numberr is %lf", sum(x,y));
     return 0;
 }