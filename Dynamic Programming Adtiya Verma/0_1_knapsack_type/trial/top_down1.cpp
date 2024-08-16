#include <bits/stdc++.h>
using namespace std;

int t[102][1002];

int knapsack(int i, int w, int n, int capacity, int wt[], int val[])
{
    if (i == n || w > capacity)
    {
        return 0;
    }
    if (t[n][w] != -1)
    {
        return t[i][w];
    }
    if (wt[i] + w <= capacity)
    {
        return t[i][w] = max(val[i] + knapsack(i + 1, w + wt[i], n, capacity, wt, val), knapsack(i + 1, w, n, capacity, wt, val));
    }
    else
    {
        return t[i][w] = knapsack(i + 1, w, n, capacity, wt, val);
    }
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