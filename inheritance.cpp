#include<iostream>
using namespace std;

class Human{

   
    public:
    int height;
    int weight;
    int age;

    void setweight(int a){
        this->weight=a;
    }

    int getage(){
        return this->age;
    }
};

class Male: public Human{  //inherting the hero class property
    public:
    string color;

    void sleep(){
        cout<<"male sleep"<<endl;
    }
};


int main(){
    Male obj1; //obj of child class but can inherit all property/datamember of parent class

    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;


    obj1.sleep();

}