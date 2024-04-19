//function Template for C++

//Function to reverse the queue.
class Solution
{
    
    void reverse(queue<int>&q){
        if(q.empty()){
            return;
        }
        int ans=q.front();
        q.pop();
        reverse(q);
        q.push(ans);
    }
    public:
    queue<int> rev(queue<int> q)
    {
       reverse(q);
       return q;
    }
};