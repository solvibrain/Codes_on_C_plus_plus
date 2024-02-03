#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks of the students : ");
    scanf("%d",&marks);
    switch (marks/10){
        case 10 :
        case 9:
            printf("your grade is A");
            break;
        case 8:
            printf("your grade is B");
            break;
        case 7:
            printf("your grade is C");
            break;
        case 6:
            printf("your grade is D");
            break ;   
        case 5:
            printf("your grade is E");
            break;
        default:
            printf("your grade is very you have to work very hard");                    


    }
    return 0;
}   