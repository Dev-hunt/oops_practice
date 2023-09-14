#include<iostream>
#include "encap.cpp"
using namespace std;

int main(){

    studnt h1;

    // h1.class_student='A';

    teach t1;
    t1.setstu('A');

    cout<<t1.getstu()<<endl;
    return 0;
}