// sort 알고리즘에서 조건 정렬하는 방법을 배울 수 있었음.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getSum(string a) {
    int len = a.length();
    int sum = 0;
    for(int i = 0 ; i < len ; i++) {
        if(a[i] - '0' <= 9 && a[i] - '0' >= 0) {
            sum += a[i] - '0';
        }
    }
    return sum;
}

bool compare(string a, string b) {
    // 길이가 다른 경우 짧은 것을 앞으로 정렬 시킴
    if(a.length() != b.length()) {
        return a.length() < b.length();
    } 
    // 길이가 같은 경우 숫자의 합이 작은 것을 앞으로 정렬 시키는 조건문
    else {
        int aSum = getSum(a);
        int bSum = getSum(b);

        if(aSum != bSum) return aSum < bSum;
        // 둘 다 같은 경우 사전 배열로 else 조건
        else return a < b;
    }
}

int main() {
    int num;
    string str;
    vector<string> arr;
    vector<int> count;
    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> str;
        arr.push_back(str);
    }

    // 정렬 조건 compare 함수를 하나 생성해준다.
    // compare 조건 대로 sort를 진행한다.
    // 원래는 알파벳 크기 순서대로 하지만 compare 대로 조건을 걸어주는 것
    sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < num ; i++) cout << arr[i] << endl;
    
    return 0;
}
