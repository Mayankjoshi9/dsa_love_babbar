#include <iostream>
// we can include class defined on other file to current file.
#include "hero.cpp"
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    Hero(int h){
        this->health=h;
    }
    Hero(){
        cout<<"constructor called"<<endl;
    }
    void print()
    {
        cout << level << endl;
    }

    int gethealth()
    {
        return health;
    }

    void sethealth(int h)
    {
        health = h;
    }
}; 

int main()
{
    Hero h1(14);
    // h1.sethealth(12);
    cout<<"health : "<<h1.gethealth()<<endl;
    Hero ramesh;
    cout<<"health : "<<ramesh.gethealth()<<endl;
    // cout << "size : " << sizeof(h1) << endl;

    // Hero *ptr=new Hero;
    // ptr->sethealth(34);
    // cout<<"health of ptr : "<<ptr->gethealth()<<endl;
}