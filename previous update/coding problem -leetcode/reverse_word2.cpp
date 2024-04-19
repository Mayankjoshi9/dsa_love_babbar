#include <bits/stdc++.h>
using namespace std;
void reversea(vector<char> arr, int size)
{
    
    int s = 0,e;
    for ( e = 0; e <= arr.size(); e++)
    {
        if (arr[e] == ' ' || arr[e] == '\0'  )
        {
           reverse(arr.begin()+s,arr.begin()+e);
           s=e+1;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "";
    }
}
int main()
{
    string s = "my name is love babbar";
    vector<char> arr(s.begin(), s.end());
    int size = arr.size();
    reverse(arr.begin(), arr.end());
    reversea(arr, size);
}