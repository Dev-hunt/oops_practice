#include<iostream>
#include "Hero.cpp"
using namespace std;

int main(){
    // object initialize h1 by static allocation
    Hero h1;
    // object initialize h1 by dynamic allocation
    Hero *b=new Hero;
    // pointer initalize with store any address
    int *c;

// set the value through pointer of object
    b->health=30;
    b->name='A';
    b->setpoints(40);

// set the value of object
    h1.health=70;
    h1.name='c';
    h1.setpoints(67);

// static printing the value
    cout<<sizeof(h1)<<endl;
    cout<<h1.health<<endl;
    cout<<h1.name<<endl;
    cout<<h1.getpoints()<<endl;
    h1.hitpoint();

// dereference the pointer AND print value by different ways
    cout<<sizeof(b)<<endl;
    cout<<(*b).health<<endl;
    cout<<(*b).name<<endl;
    cout<<(*b).getpoints()<<endl;


// randomly checking the value 
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<"size of:"<<sizeof(Hero)<<endl;
    cout<<"size of:"<<sizeof(*b)<<endl;


}
