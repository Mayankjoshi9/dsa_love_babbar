
#include <bits/stdc++.h>
using namespace std;

string lcs(string X, string Y, int i, int j)
{
    if (i == X.size() || j == Y.size()){
        string s="";
        return s;
    }
    if (X[i ] == Y[j ])
        return X[i] + lcs(X, Y, i + 1, j + 1);
    else
        if(lcs(X,Y,i,j+1).size()>lcs(X,Y,i+1,j).size()){
           return lcs(X,Y,i,j+1);
        }
        else{
            return lcs(X,Y,i+1,j);
        }
}

int main()
{
    string S1 = "aabcdacdbb";
    string S2 = "abcdbcdabc";
    int i = 0;
    int j = 0;

    cout<< lcs(S1, S2, i, j);

    return 0;
}

