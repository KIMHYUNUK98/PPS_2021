#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int k = 0;
    int num = 0;
    int count = 0;
    vector<int> arr;

    cin >> n >> k;

    for(int i = 0 ; i < n ; i++) {
        cin >> num;
        arr.push_back(num);
    }

    for(int i = n-1; k > 0; ) {
        if(arr[i] > k) i--;
        if(arr[i] <= k) {
            k -= arr[i];
            count++;
        }
    }

    cout << count;
    return 0;
}