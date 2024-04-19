#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void simpleSieve(int limit, vector<int>& primes) {
    vector<bool> isPrime(limit + 1, true);
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p])
            primes.push_back(p);
    }
}

void segmentedSieve(int L, int R) {
    int limit = floor(sqrt(R)) + 1;
    vector<int> primes;
    simpleSieve(limit, primes);

    int n = R - L + 1;
    vector<bool> isPrime(n, true);

    for (int i = 0; i < primes.size(); ++i) {
        int lowLim=(L/primes[i])*primes[i];
        if (lowLim<L)
        {
            lowLim+=primes[i];
        }
        
        // int lowLim =max(primes[i] * primes[i], (L + primes[i] - 1))
        //  / primes[i] * primes[i];
        cout<<lowLim<<endl;
        for (int j = lowLim; j <= R; j += primes[i]) {
            if (j != primes[i]) // Exclude the prime itself
                isPrime[j - L] = false;
        }
    }

    for (int i = L; i <= R; ++i) {
        if (isPrime[i - L])
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int L, R;
    cout << "Enter the range [L, R]: ";
    cin >> L >> R;

    cout << "Prime numbers in the range [" << L << ", " << R << "]:\n";
    segmentedSieve(L, R);

    return 0;
}
//  23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97