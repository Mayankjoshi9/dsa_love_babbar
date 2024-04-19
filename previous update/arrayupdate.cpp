#include <iostream>
using namespace std;
int update(int arr[],int size)
{
    arr[0]=4;
    cout<<"array in update function :\n";
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}
//array can update by a function because array give its address to the function 
//which is not true for a no.
int main()
{
    int arr[]={5,6,7};
    update(arr,3);
    cout<<"print the array :\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}