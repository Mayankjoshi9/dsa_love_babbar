#include <iostream>
using namespace std;
int sum(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;

}
int main()
{
    int size;
    cout<<"enter the size of array : ";
    cin>>size;

    int arr[100];
    cout<<"enter the element of array \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of element of array : "<<sum(arr,size);

}