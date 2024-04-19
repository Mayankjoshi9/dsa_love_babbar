 #include <bits/stdc++.h>
 using namespace std;
 

class Solution{
    public:
  int largestRectangleArea(int* heights,int n) {
    stack<int> s;
    int maxArea = 0;

    for (int i = 0; i < n; ++i) {
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
        int width = s.empty() ? n : n - s.top() - 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}

int maxArea(int M[MAX][MAX], int n, int m) {
        int area=largestRectangleArea(M[0],m);
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]!=0){
                    M[i][j]=M[i][j]+M[i-1][j];
                }
                else{
                    M[i][j]=0;
                }
            }
            area=max(area,largestRectangleArea(M[i],m));
        }  
        return area; 
    }
};  