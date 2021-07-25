#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string num[11] = { "zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine" };

int main() {
    int n, m;
    string str;

    vector<pair<string, int>> arr;

    cin >> n >> m;

    for(int i = n ; i <= m ; i++) {
        if( i < 10) {
            str =  num[i % 10];
            arr.push_back({str, i});
        } else {
            str = num[i / 10] + " " + num[i % 10];
            arr.push_back({str, i});
        }
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() ; i++) {
        cout << arr[i].second << " ";
        if(i % 10 == 9) cout <<endl;
    }

    return 0;
}