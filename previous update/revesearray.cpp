#include <iostream>
using namespace std;
/*void revese(int arr[],int size)
{
    int a[343235];
    for ( int i = 0; i < size; i++)
    {
        a[i]=arr[size-i-1];
    }
    for (int  j= 0;  j<size ; j++)
    {
        arr[j]=a[j];
    }
}*/
void revese(int arr[],int size)
{   int start=0;
    int end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    
}
int main()
{
    int arr[]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    revese(arr,size);
    
           //    0 1 2 3
    for (int i = 0; i <size ; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}