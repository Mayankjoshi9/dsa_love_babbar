#include <bits/stdc++.h>
using namespace std;

// naive string matching algo
// brute force
// Time Complexity: O(N*M)
// Auxiliary Space: O(1)
bool IsPattern(string source,string pattern){
    int s=source.size(),p=pattern.size();
    for(int i=0;i<s-p+1;i++){

        int j=0;
        while(j<p && source[j+i]==pattern[j]){
            j++;
        }
        if(j==p){
            return true;
        }
    }
    return false;
}
int main(){
     string source="hellomayjosmayank";
     string pattern="mayank";
     if(IsPattern(source,pattern)){
        cout<<"pattern matches";
     }
     else{
        cout<<"pattern not matches";
     }
}