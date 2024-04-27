
#include <bits/stdc++.h>

class compare {
public:
  bool operator()(Node *a, Node *b) { return a->data > b->data; }
};

Node *mergeKLists(vector<Node *> &listArray) {
  priority_queue<Node *, vector<Node *>, compare> minHeap;
  int k = listArray.size();
  if (k == 0) {
    return nullptr;
  }
  for (int i = 0; i < k; i++) {
    if (listArray[i]) {
      minHeap.push(listArray[i]);
    }
  }

  Node *ans = minHeap.top();
  Node *tail = ans;
  minHeap.pop();
  minHeap.push(tail->next);
  while (minHeap.size() > 0) {
    Node *temp = minHeap.top();
    minHeap.pop();
    tail->next = temp;
    tail = temp;
    if (tail->next) {
      minHeap.push(tail->next);
    }
  }
  return ans;
}
