#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool possible(vector<int> rank, int mid, int m) {

  int count = 0;
  for (int i = 0; i < rank.size(); i++) {
    int dish = rank[i];
    int j = 2;
    cout<<endl;
    cout<<"mid is : "<<mid<<endl;
    while (dish <= mid) {
      
      cout<<"dish is : "<<dish<<" "<<count<<endl;
      if (count == m-1) {
      return 1;
    }
      count++;
      dish = (rank[i] * j) + dish;
      j++;
      
      
    }
    cout<<"\n";
    
  }
  if (count < m) {
    return 0;
  }
  }
int minCookTime(vector<int> &rank, int m) {
  sort(rank.begin(), rank.end());
  int s = 0, ans = -1;
  int e = rank[0] * ((m * (m + 1)) / 2);
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (possible(rank, mid, m)) {
      ans = mid;
      e = mid - 1;

    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  
  return ans;
}

int main()
{
    int m=11;
    vector<int>rank={1,2,3,4};

    cout<<minCookTime(rank,m);
}
