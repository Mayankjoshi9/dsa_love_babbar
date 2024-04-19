#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
        int ans=0;
        for (int i=0;i<size;i++)
        {
           for(int j=0;j<size;j++)
           {
               if(i!=j){
               if (arr[i]==arr[j])
               {
                   arr[j]=0;
                   arr[i]=0;
               }
               }
           }
        }
       for (int p=0; p<size;p++)
       {
           if (arr[p]!=0)
           {
               ans=arr[p];
           }
       }
        return ans;
    //Write your code here
}int main()
{
    int arr[]={1,2,3,2,1};
    cout<<"answer is "<<findUnique(arr,5)<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}