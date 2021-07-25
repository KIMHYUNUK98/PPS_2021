#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num;
    int len;
    int fruit;
    vector<int> arr;

    cin >> num >> len;

    for(int i = 0 ; i < num ; i++) {
        cin >> fruit;
        arr.push_back(fruit);
    }

    sort(arr.begin(), arr.end());

    for(int i = 0 ; i < num ; i++) {
        if(len >= arr[i]) len++;
    }

    cout << len;

    return 0;
}