#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    // make constructor public because by default private
    public:
    char level;
    char *name ;  //if   i want to tyye this "name[100]" then this will not a good practice
    
// construcor,,,,,, now the automatic constructor destroyed/ death,, manual constructor will used only.
    Hero(){
        cout<<"constructor called"<<endl;
        name=new char[100];

    }
// paramerterized contructor
    Hero(int heath){
        this->health=health;
    }
// using this keyword as a pointer to store address of  current object
    Hero(int heath, char level){
        this->level=level;
        this->health=health;
    }



//________________copy constructor___________________________



    Hero(Hero& temp){   //using of ampercent & is that agr ye use na kre to loop me fss jayenge pass by value ho jayega|||| pass by reference ke liye & lgaya  so temp will hero's new object
        
        char *ch=new char[strlen(temp.name)+1]; 
        strcpy(ch,temp.name);// in  this, ch will copy the temp/ current object name
        this->name=ch;
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }


//printing function

    void printg(){
        cout<<"Name:"<<this->name<<endl;
        cout<<"heath:"<<this->health<<endl;
        cout<<"level:"<<this->level<<endl;
    }

    int getHealth(){
        return health;

    }
    char getlevel(){
        return level;

    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char c){
        level=c;
    }
    void setname(char name[]){
        strcpy(this->name,name);//copy it into current pointer name
    }
};


int main(){

    //simple constructor called
    Hero h1;
    h1.sethealth(12);
    h1.setlevel('D');
    char name[15]="Devansh";
    h1.setname(name);

    h1.printg();

    //_______________use default copy constructor________________________
    Hero h2(h1);
    h2.printg();
    Hero h3=h1;
    h3.printg();
    //ye to ho gya default copy constructor

    //now if i changed name of h1 then what effect on 2 and 3

    h1.name[0]='G';
    h1.printg();
    h2.printg();
    h3.printg();

    //so if i changed name of h1 then h2 and h3 also changed.
    //this means copy constructor used shallow copy where we access the same memory with 3 multiple names/object 

    //______________________use defined copy constructor____________(main function vala code to same hi h bss abhi hero constructor ko  comment nhi kiya h)
    Hero h2(h1);
    h2.printg();
    Hero h3=h1;
    h3.printg();
    //ye to ho gya default copy constructor

    //now if i changed name of h1 then what effect on 2 and 3

    h1.name[0]='G';
    h1.printg();
    h2.printg();
    h3.printg();
}
