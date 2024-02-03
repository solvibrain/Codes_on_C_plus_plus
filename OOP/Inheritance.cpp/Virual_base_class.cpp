#include <iostream>
using namespace std;
/*Algorithm for the programme:
    1.first making the class Student.
    2.Then making two class named Sport and Test and inheriting the property of Student in it.
    3. Then making REsult named class which is inheriting both Test and Sport but at the same time 
        by inheriting in such a way it become ambigous for the compiler ,
    4. so we are using Virtual base class concept.    
*/

class Student{
    protected:
        int roll_number;
        public:
            void set_roll(int a){
                roll_number=a;
            }
            void display_rollnumber(){
                cout<<"roll Number of Student is "<<roll_number<<endl;
            }
}; 
class Test: virtual public Student{
    public:
        int maths,physics;
        void set_marks(int m1,int m2){
            maths=m1;
            physics=m2;
        }
        void display_marks(){
            cout<<"Marks in Maths "<<maths<<endl;
            cout<<"Marks in Physics"<<physics<<endl;
        }
};
class Sport: virtual public Student{
    protected:
        int Score;
    public:
        void set_score(int sc){
            Score=sc;
        }
        void display_score(){
            cout<<"Score of the Student is "<<Score<<endl;
        }

};
class Result : public Test, public Sport{
    public:
        void result(){
        cout<<"Overall Result of the student is "<<Score+maths+physics<<endl;
    }
};

int main(){
    Result Rupesh;
    Rupesh.set_roll(1);
    Rupesh.set_marks(99,100);
    Rupesh.set_score(99);
    Rupesh.display_rollnumber();
    Rupesh.display_marks();
    Rupesh.display_score();
    Rupesh.result();


    return 0;
    }