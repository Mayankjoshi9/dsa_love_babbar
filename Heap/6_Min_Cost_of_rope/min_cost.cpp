class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long> ,greater<long long>> pq;
        long long ans=0;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        while (pq.size()>1){
            long long ele1=pq.top();
            pq.pop();
            long long ele2=pq.top();
            pq.pop();
            long long sum=ele1+ele2;
            ans+=sum;
            pq.push(sum);
        }
        return ans;
    }
};