// using a variable.

class SpecialStack {
    stack<int>st;
    int min=INT_MAX;
    public:
        
    void push(int data)
    {
        if(st.empty())
        {
            st.push(data);
            min=data;
        }
        else{
            if(data<min)
            {
               int val=2*data-min;
               st.push(val);
               min=data; 
            }
            else
            {
                st.push(data);
                
            }
        }
        

    }

    int pop() {
        if(st.empty()){
            return -1;
        }
        int curr=st.top();
        st.pop();
        if(curr>min){
            return curr;

        }
        else{
            int prevMin=min;
            int val=2*min-curr;
            min=val;
            return prevMin;
        }
    }

    int top() {
        if(st.empty()){
            return -1;
        }
        int curr=st.top();
        if(curr<min){
            return min;
        }
        else{
            return curr;
        }
    }

    int getMin() {
        if(st.empty()){
            return -1;
        }
        return min;
    }  
};