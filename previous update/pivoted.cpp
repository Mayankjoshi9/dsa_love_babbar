#include <iostream>
using namespace std;
int getpivot(int arr[], int size)
{
    int s = 0, e = size - 1;
    int m = s + (e - s) / 2;
    while (s<e)
    {
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[] = {4, 5,6, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    cout <<"pivoted index is : "<< getpivot(arr, size);
}