#include<iostream>
using namespace std;

class super{
    public:
    int age;


    void shower(){
        cout<<"super class show call"<<endl;
    }


};
class child: public super{

    public:
    void shower(){  //method overridding
        cout<<"child class show call"<<endl;
    }
};

int main(){
    child obj1;
    obj1.shower();//method overridding
}

