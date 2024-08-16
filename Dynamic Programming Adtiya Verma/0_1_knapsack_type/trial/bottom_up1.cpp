#include <bits/stdc++.h>
using namespace std;

int t[102][1002];

int knapsack(int i, int w, int n, int capacity, int wt[], int val[])
{

    for (int i = n; i >= 0; i--)
    {
        for (int j = capacity + 1; j >= 0; j--)
        {
            if (i == n || j == capacity + 1)
            {
                t[i][j] = 0;
            }

            else if (wt[i] + j <= capacity)
            {
                t[i][j] = max(val[i] + t[i + 1][j + wt[i]], t[i + 1][j]);
            }
            else
            {
                t[i][j] = t[i + 1][j];
            }
        }
    }

    return t[0][0];
}

int main()
{
    memset(t, -1, sizeof(t));

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int capacity = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(0, 0, n, capacity, wt, val);
}