class Solution {
public:
    int fib(int n) {
        int answer = 0;
        
        if(n == 0) return 0;
        else if(n == 1) return 1;
        
        else {
            answer = fib(n-1) + fib(n-2);
            return answer;
        }
    }
};