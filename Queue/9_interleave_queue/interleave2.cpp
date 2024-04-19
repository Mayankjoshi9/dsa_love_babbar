#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeQueue(queue<int> &q)
{

    vector<int> ans(q.size(), 0);
    cout<<q.size()/2<<endl;
    int size=q.size()/2;
    for (int i = 0; i < size; i++)
    {
        
        int ele = q.front();
        q.pop();
        ans[i * 2] = ele;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    int i = 1;
    while (!q.empty())
    {
        int ele = q.front();
        q.pop();
        ans[i] = ele;
        i += 2;
    }

    return ans;
}
int main()
{
    vector<int> arr = {8, 12, 13, 15, 9 ,14, 2 ,4 ,20 ,12};
    queue<int> q;
    for (int i = 0; i < arr.size(); i++)
    {
        q.push(arr[i]);
    }
    vector<int> ans = rearrangeQueue(q);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

// 8 14 12 2 13 4 15 20 9 12