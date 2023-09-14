#include<iostream>
using namespace std;

class Hero{

    // make constructor public because by default private
    public:
    char level;
    int point;

    
// construcor,,,,,, now the automatic constructor destroyed/ death,, manual constructor will used only.
    Hero(){
        cout<<"constructor called"<<endl;

    }
// paramerterized contructor
    Hero(int point){
        cout<<point<<endl;
    }
// using this keyword as a pointer to store address of  current object
    Hero(int point, char level){
        this->level=level;
        this->point=point;
    }
    void printg(){
        cout<<level<<endl;
        cout<<point<<endl;
    }
};

int main(){
    // cout<<"HI"<<endl;
    // object static
    Hero ramesh;
    // cout<<"Hello"<<endl;

    // Hero *h1=new Hero();

    // object with parameter
    Hero ram(11);

    Hero h1(20,'c');
    h1.printg();
}