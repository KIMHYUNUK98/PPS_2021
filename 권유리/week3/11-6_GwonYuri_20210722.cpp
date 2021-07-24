class MinStack {
    private:
        vector<int> minStack;
    public:
        MinStack() {}
    
        void push(int x) {
            minStack.push_back(x);
        }
    
        void pop() {
            minStack.erase(minStack.end() - 1);
        }
    
        int top() {
            return minStack[minStack.size() - 1];
        }
    
        int getMin() {
            return *min_element(minStack.begin(), minStack.end());
        }
};