#include<bits/stdc++.h>
using namespace std;
void reversea(string arr,int size){
    stringstream iss(arr);
    string word;
    size=size-1;
    while(iss>>word){
        
        for (int i =word.size()-1; i >=0; i--)
        {
            cout<<size<<" ";
            arr[size--]=word[i];
        }
        arr[size--]=' ';
        
    }
    cout<<arr<<endl;
}
int main(){
    string s="my name is love babbar";
    vector<char> arr(s.begin(),s.end());
    int size=arr.size();
    reversea(s,size);
}
