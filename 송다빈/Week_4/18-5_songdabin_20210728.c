int climbStairs(int n){
    int first = 1, second = 1, result = 0;
    
    if (n < 4) return n;
    
    for (int i = 2; i <= n; i++) {
        result = first + second;
        second = first;
        first = result;
    }
    
    return result;
}