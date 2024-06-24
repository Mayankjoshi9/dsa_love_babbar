#include<bits/stdc++.h>
using namespace std;
//   lps[i] = the longest proper prefix of pat[0..i] which is also a suffix of pat[0..i]. 
void Buildlps(string pat,int p,vector<int> lps){
    lps[0]=0;
    int len=0;
    for(int i=1;i<p;){
       if(lps[i]==lps[len]){
           len++;
           lps[i]=len;
           i++;
       }
       else{
            if(len!=0){
               len=lps[len-1];
            }
            else{
               lps[i]=0;
               i++;
            }
       }
    }
}
void KMPSearch(string pat,string txt){
    int p=pat.size();
    int t=txt.size();

    // finding longest proper prefix
    vector<int>lps(p);
    Buildlps(pat,p,lps);

    
}

int main()
{
    string pat = "ABABDABACDABABCABAB";
    string txt = "ABABCABAB";
    KMPSearch(pat, txt);
    return 0;
}