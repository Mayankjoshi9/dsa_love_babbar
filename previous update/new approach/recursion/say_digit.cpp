#include<bits/stdc++.h>
using namespace std;
void saydigit(int n, string arr[]){
    // base condition
    if (n==0)
    {
        cout<<"hello zero"<<endl;
        return;
    }
    int digit=n%10;
    n=n/10;
    cout<<"hello up"<<endl;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
    cout<<"hello down"<<endl;
}
int main(){
    int n;
    cout<<"enter the no : ";
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    saydigit(n,arr);
    cout<<endl;
}