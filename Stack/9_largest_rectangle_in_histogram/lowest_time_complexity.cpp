int largestRectangleArea(vector<int>& heights) {
    stack<int> s;
    int maxArea = 0;

    for (int i = 0; i < heights.size(); ++i) {
        while (!s.empty() && heights[i] < heights[s.top()]) {
            int height = heights[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        s.push(i);
    }

    while (!s.empty()) {
        int height = heights[s.top()];
        s.pop();
        int width = s.empty() ? heights.size() : heights.size() - s.top() - 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}