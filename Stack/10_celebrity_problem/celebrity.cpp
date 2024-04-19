class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        int ans=-1;
        // push all element to stack
        for(int i=0;i<n;i++){
                st.push(i);
            
        }
        // check every two element and pop one and push another
        while(st.size()!=1){
            int ele1=st.top();
            st.pop();
            int ele2=st.top();
            st.pop();
            if(M[ele1][ele2]==1){
                st.push(ele2);
            }
            else{
                st.push(ele1);
            }
        }
        // check the single element left.
        ans=st.top();
        for(int i=0;i<n;i++){
            // check its column and rows simultanously
            if(ans!=i && ( M[ans][i]==1 || M[i][ans]==0)){
                return -1;
            }
        }
        return ans;
    }
};