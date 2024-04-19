// using two stack

class SpecialStack {
    stack<int>st;
    stack<int>temp;
    public:
        
    void push(int data) {
       st.push(data);
       if(temp.empty() || temp.top()>=data){
           temp.push(data);
       }
    }

    void pop() {
        if(st.top()==temp.top()){
            temp.pop();
        }
        st.pop();
    }

    int top() {
       return st.top();
    }

    int getMin() {
        return temp.top();
    }  
};