// 숫자가 주어지면 각 digit별로 제곱을 해서 더하는 알고리즘을 배울 수 있었음
// unordered_map을 사용해서 해당 숫자가 visited한 것인지의 유무를 판단하는 map을 만드는 연습
// 생각필요..

class Solution {
public:
    
    int sums(int n) {
        int plus = 0;
        while(n >= 10) {
            plus += (n%10) * (n%10);
            n = n/10;
        }
        plus += n*n;
            
        return plus;
    }
    
    bool isHappy(int n) {
        unordered_map<int, bool> mp;
        int sum = sums(n);
        
        while(sum != 1) {
            if(mp[sum] == true) return false;
            else mp[sum] = true;
            
            sum = sums(sum);
        }
        
        if(sum == 1) return true;
        else return false;
    }
};