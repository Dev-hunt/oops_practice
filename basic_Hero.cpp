#include<iostream>

using namespace std;
class Hero{

    private:
    int points;
    

    public:
    double fir;
    int health;
    char name;
    
    
    

     
    // printer the private value
    void hitpoint(){
        cout<<points<<endl;
    }
    // getter
    int getpoints(){
        return points;
    }
    // setter
    int setpoints(int l){
        points=l;
        
    }
};