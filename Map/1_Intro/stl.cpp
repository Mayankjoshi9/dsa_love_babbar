#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;

    pair<string,int> p= make_pair("hello",2);
    m.insert(p);

    pair<string,int> pair2("bello",2);
    m.insert(pair2);

    m["hello"]=3;

    cout<< m.at("hello")<<endl;
    // below code give error
    // cout<<m.at("NotExist")<<endl; 
    cout<<m["NotExist"]<<endl;
    cout<<m.at("NotExist")<<endl;

    cout<<"size : "<<m.size()<<endl;

    for(auto i : m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    // iterator
    cout<<"iterator "<<endl;
    unordered_map<string,int> ::iterator it = m.begin();
    // order of element is not same as they pushed  in unordered_map
    while(it!=m.end()){
        cout<<it->first<<" -> "<<it->second<<endl;
        it++;
    }



    // to check presence
    cout<<"count function " <<m.count("bro")<<endl;
    
    // erase
    m.erase("bello");
    cout<<"size : "<<m.size()<<endl;

}