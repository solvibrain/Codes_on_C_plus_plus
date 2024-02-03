#include<iostream>
#include<string.h>
using namespace std;

typedef struct employee{
    int eId;
    float salary;
    char name[89];
}emp;





int main(){
    
    emp Harikesh;
    Harikesh.eId = 789;
    Harikesh.salary= 745213;
    strcpy(Harikesh.name,"harikesh");
    
    cout<<"Salary of "<<Harikesh.name<<"is "<<Harikesh.salary<<endl;
    cout<<"Harikesh of "<<Harikesh.name<<"is "<<Harikesh.eId<<endl;
    
    
    return 0;
}