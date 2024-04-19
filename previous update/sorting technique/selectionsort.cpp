#include <iostream>
#include<vector>
#include<algorithm>
using namespace std; 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int minindex=i;
       for( int j=i+1 ; j<n ; j++ ){
           if(min>arr[j]){
               min=arr[j];
               minindex=j;
           }
       }
       swap(arr[i],arr[minindex]);

    }
}
int main(){
    vector<int> arr={4,3,2,1};
    int n=arr.size();
    selectionSort(arr,n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    
}