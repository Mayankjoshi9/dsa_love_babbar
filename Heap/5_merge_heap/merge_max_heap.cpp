// User function Template for C++

class Solution{
    public:
    
    void heapify(vector<int>& arr,int i,int size){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }
        
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,largest,size);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        int size=m+n;
       vector<int> ans(size);
       int j=0;
       for(int i=0;i<n;i++){
           ans[j]=a[i];
           j++;
       }
       for(int i=0;i<m;i++){
           ans[j]=b[i];
           j++;
       }
       
       for(int i=size/2-1;i>=0;i--){
           heapify(ans,i,size);
       }
       return ans;
    }
};