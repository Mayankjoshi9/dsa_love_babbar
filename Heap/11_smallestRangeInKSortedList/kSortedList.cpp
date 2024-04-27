#include <bits/stdc++.h>
class node{
    public:
         int data;
         int row;
         int col;

         node(int d, int r, int c){
             data=d;
             row=r;
             col=c;
         }
};

class compare{
     public:
          bool operator()(node* a, node* b){
                   return a->data>b->data;
          }
};
int kSorted(vector<vector<int>> &a, int k, int n) {
    int max=INT_MIN;
    int ans=INT_MAX;
    priority_queue<node*,vector<node*>, compare>pq;
    for(int i=0;i<k;i++){
        int element= a[i][0];
        pq.push(new node(element,i,0));
        if(element>max){
            max=element;
        }
    }
    while(!pq.empty()){
           node* temp= pq.top();
           pq.pop();

           if(max - temp->data < ans){
                    ans = max - temp ->data+1;
           }
           

           if((temp->col+1 )<n){
               int newElement=a[temp->row][temp->col+1];
                 pq.push(new node(newElement,temp->row,temp->col+1));
                 if (max < newElement) {
                   max = newElement;
                 }
           }
           else{
               break;
           }
    }
return ans;


}  