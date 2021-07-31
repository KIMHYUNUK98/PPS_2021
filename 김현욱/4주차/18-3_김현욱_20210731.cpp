#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num, count;
    int max = 0;
    int max_arr = 0;
    vector<int> arr;

    // 배열에 해당 숫자 할당
    cin >> num;
    vector<int> dp(num,0);
    for(int i = 0 ; i < num ; i++) {
        cin >> count;
        arr.push_back(count);
    }

    // DP 초기화
    dp[0] = arr[0];

    // 내림차순 수열이면서 DP 최대값을 할당한다
    // 기존의 arr[i] 까지 합산한다.
    for(int i = 1 ; i < num ; i++) {
        for(int j = 0 ; j < i ; j++) {
            if(arr[i] < arr[j]) {
                max = dp[j];
                dp[i] = max;
            }
        }
        dp[i] += arr[i];
    }

    cout << dp[num-1];
    
    return 0;
}