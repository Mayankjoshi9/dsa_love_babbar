#include<iostream>
using namespace std;
class animal{
    public:
       virtual void sound()=0;
};
class dog: public animal{
    public:
       void sound() override{
          cout<<"woof"<<endl;
       }
};
int main(){
    dog obj;
    obj.sound() ;    

}