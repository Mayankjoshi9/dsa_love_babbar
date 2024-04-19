#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    int element=arr[s];
    int pindex=s;
    // finding position of partition index
    for (int i = s+1; i <=e; i++)
    {
        if (arr[i]<element)
        {
            pindex++;
        } 
    }
    // swaping with that location
    swap(arr[pindex],arr[s]);
    // put element smaller in left and larger in right wrt partition element
    while (s<pindex && e>pindex)
    {
        if(arr[s]>element){
            if (arr[e]<element)
            {
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
            else{
                e--;
            }
            
        }
        else{
            s++;
        }
    }
    
    return pindex;
    
    
}
void quickSort(int arr[],int s,int e){
      if(s==e){
        return;
      }
      // finding partition index
      int pindex=partition(arr,s,e);
      // left half
      quickSort(arr,s,pindex);
      // right half
      quickSort(arr,pindex+1,e);


}
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=sizeof(arr)/sizeof(int);
    quickSort(arr,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}