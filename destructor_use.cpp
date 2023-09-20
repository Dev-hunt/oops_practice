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
    
    Hero(int point){
        cout<<"parameterized-constructor called"<<endl;
        cout<<point<<endl;
    }

    void printg(){
        cout<<level<<endl;
        cout<<point<<endl;
    }

    //destructor creation
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};

int main(){
    
    // object static
    Hero ramesh;
    
// object dyanmic
    Hero *h1=new Hero();

    delete h1;// for dynamic allocated object we have to delete it manually for memory deallocation 
    // after that the destructor called

    // object with parameter
    Hero ram(11);

}