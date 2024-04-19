 #include<bits/stdc++.h>
 using namespace std;
  string decodeMessage(string key, string message) {
        char s[100];
        map<char,char>m;
        char p='a';
        for(int i=0;i<key.size();i++){
            m[key[i]]=p;
            cout<<p<<endl;
            p++;
        }
        
        for(int j=0;j<message.size();j++){
            if(message[j]==' '){
                s[j]=' ';
                
            }
            else{
               s[j]=m[message[j]];
               }
        }
        return s;
        
    }
int main(){
    string key="eljuxhpwnyrdgtqkviszcfmabo";
    string message="zwx hnfx lqantp mnoeius ycgk vcnjrdb";
    cout<<decodeMessage(key,message);

}