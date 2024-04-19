#include <iostream>
using namespace std;
int swaping(int arr[],int size)
{
    int start=0,next=1;
    while (start<=(size-1) && next<=(size-1))
    {
        swap(arr[start],arr[next]);
        start+=2;
        next+=2;

    }
    


}
void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}
int main()
{
    int arr[]={1,2,7,8,5};
    int brr[]={1,2,3,4,5,6};
    swaping(arr,5);
    swaping(brr,6);
    print(arr,5);
    cout<<endl;
    print(brr,6);

}