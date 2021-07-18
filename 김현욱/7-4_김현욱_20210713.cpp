#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str;
    vector<string> arr;

    cin >> str;
    int l = str.length();

    for(int i = 0 ; i < l; i++) {
        arr.push_back(str.substr(i, l));
    }

    sort(arr.begin(), arr.end());

    for(int i = 0 ; i < str.length(); i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}