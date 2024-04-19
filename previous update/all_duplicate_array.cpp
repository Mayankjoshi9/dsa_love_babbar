#include<iostream>
using namespace std;
void duplicate(int arr[],int size){
    int d=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++){
            if(i!=j){
            d=arr[i]^arr[j];
            
            if (d==0 && arr[i]!=0)
            {
                arr[j]=0;
                cout<<arr[i]<<endl;
            }
            
        }
        }
    }
    
    
    
    
}
int main(){
    int arr[]={1,3,2,2,4,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    duplicate(arr,size);
}