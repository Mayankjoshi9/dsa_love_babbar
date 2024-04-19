#include<bits/stdc++.h>
using namespace std;
void reversea(vector<char>&arr,int s, int e){
    while (s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
   
    
}
int main(){
    vector<char>arr={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
    int s=0 , e;
    for (int i = 0;; i++)
    {
         
        if(arr[i]==' '){
            e=i-1;
            reversea(arr,s,e);
            s=i+1;
        }
        else if(arr[i]=='\0'){
            e=i-1;
            reversea(arr,s,e);
            break;
        }
    }
    string str(arr.begin(), arr.end());
  
    cout << str << endl;
    
}