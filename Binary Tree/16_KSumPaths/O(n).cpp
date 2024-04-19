#include <unordered_map>

class Solution {
public:
    int sumK(Node *root, int k) {
        std::unordered_map<int, int> prefixSums;
        prefixSums[0] = 1; // Initialize with 0 sum count

        return dfs(root, k, 0, prefixSums);
    }

private:
    int dfs(Node *node, int k, int currentSum, std::unordered_map<int, int> &prefixSums) {
        if (!node)
            return 0;

        currentSum += node->data;
        int count = prefixSums[currentSum - k]; // Check if there is a prefix sum that can form the desired sum

        prefixSums[currentSum]++; // Increment the count of prefix sum

        // Traverse left and right subtrees
        count += dfs(node->left, k, currentSum, prefixSums);
        count += dfs(node->right, k, currentSum, prefixSums);

        prefixSums[currentSum]--; // Decrement the count of prefix sum after processing the subtree

        return count;
    }
};