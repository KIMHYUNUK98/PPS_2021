#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num, count;
    int max = 0;
    int max_arr = 0;
    vector<int> arr;

    // �迭�� �ش� ���� �Ҵ�
    cin >> num;
    vector<int> dp(num,0);
    for(int i = 0 ; i < num ; i++) {
        cin >> count;
        arr.push_back(count);
    }

    // DP �ʱ�ȭ
    dp[0] = arr[0];

    // �������� �����̸鼭 DP �ִ밪�� �Ҵ��Ѵ�
    // ������ arr[i] ���� �ջ��Ѵ�.
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