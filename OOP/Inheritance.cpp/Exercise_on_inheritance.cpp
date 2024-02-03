 #include <iostream>
 #include <cmath>
 using namespace std;
class Simple_Calcularor{
    protected:
        int num1,num2;
        char sign;
        public:
           int sum,minus,mul;
           float div;
           
           void set_num(int a, int b){
               num1=a;
               num2=b;
           }

           float operation(char sign){
               if(sign=='+'){
                    sum= num1+num2;

               }
               else if(sign=='-'){
                    minus=num1-num2;
               }
               else if(sign=='*'){
                    mul=num1*num2;
               }
               else{
                    div=num1/num2;
               }
               
           }
           void result1(){
               cout<<"sum of the two number is "<<sum<<endl;
               cout<<"product of the two number is "<<mul<<endl;
               cout<<"substraction  of the two number is "<<minus<<endl;
               cout<<"division of the two number is "<<div<<endl;
           }
};
class Scientific_calculator: public Simple_Calcularor{
    public:
        double add,sub,product,divisioin;
        void operation_2(){
            sum=sin(num1)+sin(num2);
            sub=sin(num1)-sin(num2);
            product=sin(num1)*sin(num2);
            div=sin(num1)/sin(num2);
        }
        void result_2(){
             cout<<"sum of the two number is "<<add<<endl;
               cout<<"product of the two number is "<<sub<<endl;
               cout<<"substraction  of the two number is "<<product<<endl;
               cout<<"division of the two number is "<<divisioin<<endl;
        }
};

class Hybrid_calculator :  public Simple_Calcularor,public Scientific_calculator{
    
};
 int main(){
     return 0;
 }