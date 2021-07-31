// 비트 카운터 알고리즘은 동일한 상황이 숫자가 커질 수록 같이 반복되기 때문에
// DP 알고리즘을 적절히 사용하면 쉽게 구할 수 있음

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n,0);
        arr.push_back(0);
        if(n == 0) {
            return arr;
        }
        
        for(int i = 1 ; i <= n ; i++){
            if(i % 2 == 0)
                arr[i] = arr[i/2];
            else
                arr[i] = arr[i-1] + 1;
        }
               
        return arr;
    }
};