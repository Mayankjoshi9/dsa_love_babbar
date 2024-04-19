#include <iostream>
using namespace std;
bool unique(int arr[],int size){
    int a=0;
    int ap[45];
    for (int i = 0; i < size; i++){
        int p=0;
        for (int j = 0; j < size; j++){
        if (i==(size-1))
        {
           break ;
        }
        if(i!=j){
                if (arr[i]==arr[j]){
                swap(arr[i+1+p],arr[j]);
                p++;}
            }
            }
        ap[a]=p;
        cout<<"ap element fitting"<<ap[a]<<"\ta is"<<a<<endl;
        a++;
        i=i+p;
        cout<<"i is : "<<i<<endl;
    }
    
    cout<<"the element of ap : "<<endl;
    for (int i = 0; i < a; i++){
        cout<<ap[i]<<endl;
    }
    for (int i = 0; i < (a); i++){
        for (int j = 0; j < (a); j++)
        {
        
        if (i==j)
        {
            continue;
        }
        cout<<"i is :"<<i<<"\tj is :"<<j<<endl;
        if (ap[i]==ap[j]){
            return 0;
        }}
    }
    return 1;
    
}
int main(){
    int arr[]={3,5,-2,-3,-6,-6};
    int size=sizeof(arr)/sizeof(int);
    if (unique(arr,size)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}


