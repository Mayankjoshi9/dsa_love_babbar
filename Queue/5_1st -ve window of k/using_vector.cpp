vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
        
        vector<long long > result;
         vector<long long > ans;
    long long int windowStart = 0;
    long long int windowEnd = 0;

    while (windowEnd < N) {
        // Check if the current element is negative
        if (A[windowEnd] < 0) {
            result.push_back(A[windowEnd]);
        }

        // Move the window forward
        if (windowEnd - windowStart + 1 == K) {
            // Handle the result for the current window
            if (result.empty()) {
                ans.push_back(0); // If no negative integer found, add 0
            } else {
                ans.push_back(result[0]); // Append the first negative integer found
            }

            // If the element going out of the window is negative, remove it from result
            if (A[windowStart] < 0) {
                result.erase(result.begin());
            }

            windowStart++;
        }

        windowEnd++;
    }

    return ans;
                                                 
 }