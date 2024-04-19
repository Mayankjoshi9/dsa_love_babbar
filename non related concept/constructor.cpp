#include<iostream>
using namespace std;
class person {
    public:
    string name;
    person(string nam){
        name=nam;
    }
};
int main(){
    person p("mayank");
    cout<<p.name;
}