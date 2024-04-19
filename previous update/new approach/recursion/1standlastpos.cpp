#include <bits/stdc++.h> 
using namespace std;

int flast(vector<int>& arr, int s, int e, int k, int ans = -1) {
    if (s > e) {
        return ans;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == k) {
        ans = mid;
        if (arr[mid - 1] == k) {
            return flast(arr, s, mid - 1, k, ans);
        }
        else {
            return ans;
        }
    }
    else if (arr[mid] < k) {
        return flast(arr, mid + 1, e, k, ans);
    }
    else {
        return flast(arr, s, mid - 1, k, ans);
    }
}

int flast1(vector<int>& arr, int s, int e, int k, int ans = -1) {
    if (s > e) {
        return ans;
    }

    int mid = s + (e - s) / 2;

    if (arr[mid] == k) {
        ans = mid;
        if (arr[mid + 1] == k) {
            return flast1(arr, mid + 1, e, k, ans);
        }
        else {
            return ans;
        }
    }
    else if (arr[mid] < k) {
        return flast1(arr, mid + 1, e, k, ans);
    }
    else {
        return flast1(arr, s, mid - 1, k, ans);
    }
}

int firstAndLastPosition(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    pair<int, int> ans;
    ans.first = flast(arr, s, e, k);
    ans.second = flast1(arr, s, e, k);
    return ans.second;
}

int main(){
   vector<int>arr={10 ,10 ,10 ,15 ,15};
   int size=arr.size();
   int k=10;
   cout<<"ans : "<<firstAndLastPosition(arr,size,k)<<endl;
}