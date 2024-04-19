#include<bits/stdc++.h>
using namespace std;
int *func(){
    int x=10;
    return &x;
}
int main(){
    int *p=func();
    cout<<*p;
}