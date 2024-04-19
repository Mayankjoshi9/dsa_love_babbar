#include <iostream>
using namespace std;
int sqrt(int n)
{
    int s = 0, e = n, ans = -1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        int sqr = m * m;
        if (sqr == n)
        {
            return m;
        }
        else if (sqr > n)
        {
            e = m - 1;
        }
        else if (sqr < n)
        {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
double precise(int n, int tempsol, int p)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < p; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter no for square root :";
    cin >> n;
    cout << "square root is  " << sqrt(n) << endl;
    int tempsol = sqrt(n);
    cout << "square root is : " << precise(n, tempsol, 3);
}