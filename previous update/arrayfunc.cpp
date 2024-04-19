#include <iostream>
using namespace std;
void printarr(int arr[], int size)
{   
    cout<<"printing array \n";
    for (int i = 0; i < size; i++)
    {
         cout<<arr[i]<<endl;
    }
}

int main()
{
    int no[15];
    fill_n(no,5,1);
    printarr(no,5);
}