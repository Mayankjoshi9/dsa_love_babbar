// shallow copy

#include<iostream>
using namespace std;
class hero
{
private:
    
public:
    int health;
    int *Name=new int[100];
    hero(int h){
        this->health=h;
    }
    hero (hero &temp){
        this->health=temp.health;
        // this-> name=temp.name;
    }

};


int main(){
    hero m(20);
    hero k(m);
    char name[100]="mayank"; 
    cout<<"m : "<<m.health<<endl;
    cout<<"k : "<<k.health<<endl;
    m.health=200;
    cout<<"m : "<<m.health<<endl;
    cout<<"k : "<<k.health<<endl;
}