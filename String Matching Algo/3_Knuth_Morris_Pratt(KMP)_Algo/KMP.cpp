#include <iostream>
#include <vector>
#include <string>

// Function to preprocess the pattern and create the lps array
void computeLPSArray(const std::string& pattern, std::vector<int>& lps) {
    int m = pattern.size();
    int len = 0; // length of the previous longest prefix suffix
    lps[0] = 0; // lps[0] is always 0
    int i = 1;
    
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else { 
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Function to perform the KMP search algorithm
void KMPSearch(const std::string& text, const std::string& pattern) {
    int n = text.size();
    int m = pattern.size();
    
    // Create the lps array
    std::vector<int> lps(m);
    computeLPSArray(pattern, lps);

    int i = 0; // index for text[]
    int j = 0; // index for pattern[]
    
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        
        if (j == m) {
            std::cout << "Found pattern at index " << (i - j) << std::endl;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    std::string text = "ABABDABACDABABCABAB";
    std::string pattern = "ABABCABAB";
    
    KMPSearch(text, pattern);
    
    return 0;
}
