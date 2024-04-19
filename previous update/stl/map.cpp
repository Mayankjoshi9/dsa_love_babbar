#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="babbar";
    m[12]="love";
    m[3]="kumar";
     m.insert({5,"bheem"});
     cout<<m[1]<<endl;
}