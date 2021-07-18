class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    int temp;
    
    /** Initialize your data structure here. */
    MyQueue() {         
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        st1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop(void) {
        if (st2.empty() == false){
            temp = st2.top();
            st2.pop();
            return temp;
        }else{
            while (st1.empty() == false){
                st2.push(st1.top());
                st1.pop();
            }
            temp = st2.top();
            st2.pop();
            return temp;
        }
    }
    
    /** Get the front element. */
    int peek(void) {
        if (st2.empty() == false){
            return st2.top();
        }else{
            while (st1.empty() == false){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
    
    /** Returns whether the queue is empty. */
    bool empty(void) {
        if(st1.empty() == true && st2.empty() == true)
            return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */