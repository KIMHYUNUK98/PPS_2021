#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int num;
    int arr1[100000],arr2[100000];
    vector<pair<int, int>> order;
    int count = 0;
    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> arr1[i] >> arr2[i];
        order.push_back(make_pair(arr2[i], arr1[i]));
    }

    sort(order.begin(), order.end());

    int meeting = 0;
    for(int i = 0 ; i < order.size() ; i++) {
        if(meeting  <= order[i].second) {
            meeting = order[i].first;
            count++;
        }
    }
    cout << count;

    return 0;
}