#include<bits/stdc++.h>
using namespace std;
int& func(int x){
    int num=x;
   int& ans=num;
   return ++ans;
}
int* fun(int x){
    int* ptr=&x;
    return ptr;

}
int main(){
    int x=10;
    cout<<"func is : "<<fun(x)<<endl;
    cout<<x;
}