#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort(vector<int> arr, int size)
{
    int tem = size;
    for (int i = 0; i < size-1; i++)
    {
        for (int i = 0; i < tem - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        tem--;
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    vector<int> arr = {6, 2, 8, 4, 10};
    sort(arr, arr.size());
}
