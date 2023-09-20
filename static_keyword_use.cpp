#include<iostream>
using namespace std;

class Hero{

    public:
    //static datamember initialized
    static int ch;
    int health;
    char level;

// static function called
    static int ran(){
        // cout<<health<<endl;    //inn dono ko yha use hi nhi kr skte
        // cout<<level<<endl;      //kyuki ye datamember static nhi h
        cout<<ch<<endl;


    }
};
//assignvalue without creating object
int Hero::ch=5;
int main(){
    //print the value of ch without object initialize
    cout<<Hero::ch<<endl;
    cout<<Hero::ran()<<endl;

    //after object initialize
    Hero a;
    a.ch=8;

    cout<<a.ch<<endl;

    Hero b;
    b.ch=10;

    cout<<a.ch<<endl;
    cout<<b.ch<<endl;
}