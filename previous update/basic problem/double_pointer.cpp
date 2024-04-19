#include<bits/stdc++.h>
using namespace std;
void update(int **p2){
    **p2=**p2+1;
    cout<<"func "<<&p2<<endl;

}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
    cout<<"before "<<i<<endl;
    cout<<"before "<<*p<<endl;
    cout<<"before "<<&p2<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<*p<<endl;
    cout<<"after "<<&p2<<endl;

}