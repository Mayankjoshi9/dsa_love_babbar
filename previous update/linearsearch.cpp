#include <iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i]==key)
    {
        return 1;
    }
    
  }
  return 0;
  
}
int main()
{
    int arr[]={2,3,24,43,5,54,34};
    int key;
    cout<<"enter no to search :";
    cin>>key;
    bool found=search(arr,7,key);
    if (found)
    {
        cout<<"key is founded";
    }
    else
    {
        cout<<"key is absent";

    }
    

}