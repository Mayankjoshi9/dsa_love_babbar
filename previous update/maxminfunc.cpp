#include <iostream>
#include <limits.h>
using namespace std;
int getmax(int arr[],int size)
{
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi= max(maxi,arr[i]) ;  
        /*if (arr[i]>maxi)
        {
            maxi=arr[i];
        }*/
    }
    return maxi;
}
int getmin(int arr[],int size)
{
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    {
        mini=min(mini,arr[i]);
        /*if (arr[i]<mini)
        {
            mini=arr[i];
        }*/
    }
    return mini;
}

int main()
{   int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int no[100];
    cout<<"enter array no. :\n";
    for (int  i = 0; i < size; i++)
    {    
        cin>>no[i];
    }
    cout<<endl;
     

    cout<<"max no. is "<<getmax(no,size)<<endl;
    cout<<"min no. is "<<getmin(no,size);
    
    
}