#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int> a, pair<int, int> b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, num1, num2;
    vector<pair<int,int>> arr;
    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> num1 >> num2;
        arr.push_back({num1, num2});
    }

    sort(arr.begin(), arr.end(), compare);

    for(int i = 0 ; i < num ; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    return 0;
}