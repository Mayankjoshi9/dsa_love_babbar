#include <iostream>
using namespace std;
int ispalindrome(int x)
{
    int rev = 0, rem, p;
    p = x;
    while (x != 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    
    if (p == rev)
    {
        return true; /* code */
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << " enter no : ";
    cin >> n;
    
    if (ispalindrome(n) == 1)
    {
        cout << n << " is palindrome";
    }
    else
    {
        cout << n << " is not palindrome";
    }
}

