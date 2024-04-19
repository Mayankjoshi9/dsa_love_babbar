#include <iostream>
using namespace std;
void update(int arr[],int size)
{
    arr[2]=4;
    cout<<"array in update function :\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}
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
