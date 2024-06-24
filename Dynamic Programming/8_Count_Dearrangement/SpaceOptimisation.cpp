
#include <bits/stdc++.h>
#define MOD 1000000007
long long int count(int n){

    long long int prev1=0;
    long long int prev2=1;
    for(int i=3;i<=n;i++){
        long long int ans=(i-1)*(prev1+prev2);
        ans=ans%MOD;
        prev1=prev2;
        prev2=ans;
    }
    return prev2;
}
long long int countDerangements(int n) {
    
    return count(n);
} 