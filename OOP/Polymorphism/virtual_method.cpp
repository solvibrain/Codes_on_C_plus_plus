#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
        CWH(string t, float r){
            title=t;
            rating=r;
        }
         virtual void display(){
            
        }
};
class CWHVideo : public CWH{
    protected:
    float videolength;
    public:
        CWHVideo(string t,float r,float len) : CWH(t,r){
            videolength=len;

        }
        void display(){
            cout<<"Title of the video is "<<title<<endl;
            cout<<"rating of the video is "<<rating<<endl;
            cout<<"Video length  of the video is "<<videolength<<endl;
        }
};
class CWHText : public CWH{
    protected:
    float wordcount;
    public:
        CWHText(string t,float r,float len) : CWH(t,r){
            wordcount=len;

        }
        void display(){
            cout<<"Title of the video is "<<title<<endl;
            cout<<"rating of the video is "<<rating<<endl;
            cout<<"Video length  of the video is "<<wordcount<<endl;
        }
};



int main(){
    string title;
    float rating;
    float vl;
    int wc;
    title="Dopamine and Detox";
    rating = 4.63;
    vl=8;
    wc=89;
    CWHVideo rupesh(title,rating,vl);
    // rupesh.display();

    CWHText rupeshtext(title,rating,wc);


    CWH * tut[2];
    tut[0]=&rupesh;
    tut[1]=&rupeshtext;
    tut[0]->display();
    tut[1]->display();


    return 0;
}
/*
1.They cannot be static.
2. They can be accessed by only pointer 
3. They can be friend of other class 
4. if virtual class is defined in base class then it is not necessity to redifine it . 
*/
