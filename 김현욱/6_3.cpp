// 스택 2개를 사용해서 하나의 스택을 pop이나 peek할 경우 for 문을 이용해서 역으로 하나 만들어준다.
// 그리고 pop peek 할 때 그냥 top 하면 Stack을 이용한 Queue를 만들 수 있다.

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
        if (!st2.empty()){
            temp = st2.top();
            st2.pop();
            return temp;
        }else{
            while (!st1.empty()){
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
        if (!st2.empty()){
            return st2.top();
        }else{
            while (!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
    
    /** Returns whether the queue is empty. */
    bool empty(void) {
        return (st1.empty() && st2.empty());
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