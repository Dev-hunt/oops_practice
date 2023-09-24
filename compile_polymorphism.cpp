//compile time polymorphism

#include<iostream>
using namespace std;

//function overloading at compile time
class A{
   
public:

    void sayhello(){
        cout<<"heloo"<<endl;
    }

    void sayhello(char c){
        cout<<"hello with char"<<endl;
    }
};


//operator overloading

class B{
   public:
   int a;
   int b;

    int add(){
        return a+b;
    
    }

    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output of operator overload is:"<<value2-value1<<endl;
    }
};


int main(){
    A obj1;

    obj1.sayhello();
    obj1.sayhello('b');


    B obj2;
    B obj3;
    obj2.a=4;
    obj3.a=7;

    obj2+obj3;

    
    obj2.b=4;
    
    cout<<obj2.add()<<endl;

}