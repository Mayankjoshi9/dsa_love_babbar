#include<bits/stdc++.h>
using namespace std;


void reversea(vector<char> arr){
    int s=0;
    int e=0;
    int p,k;
    for (int i = 0; i <= arr.size(); i++)
    {
        if(arr[i]==' ' || arr[i]=='\0'){
            e=i-1;
            p=e;
            k=s;
            while (k<p)
            {
                swap(arr[k++],arr[p--]);
            }
            s=e+2;
           
        }
        else{
            continue;
        }
        
        
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<"";
    }
    
}
int main(){
    string s="my name is love babbar";
    vector<char> arr(s.begin(),s.end());
    reversea(arr);
}
