

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
        vector<long long>ans;
        queue<long long int>q;
        
        for(int i=0;i<K;i++){
            if(A[i]<0){
                q.push(i);
            }
        }
        
        if(!q.empty()){
            ans.push_back(A[q.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        for(int i=K;i<N;i++){
            if(!q.empty() && i-q.front()>=K){
                q.pop();
            }
            if(A[i]<0){
                q.push(i);
            }
            if(!q.empty()){
                ans.push_back(A[q.front()]);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
                                                 
 }