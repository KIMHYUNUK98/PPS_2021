#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<int,string> a, pair<int,string> b) {
    return a.first < b.first;
}

int main() {
    int num;
    pair<int, string> book;
    vector<pair<int, string>> arr;

    cin >> num;

    for(int i = 0; i < num ; i++) {
        cin >> book.first >> book.second ;
        arr.push_back(book);
    }
    
    sort(arr.begin(), arr.end(), compare);

    for(int i = 0 ; i < num ; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    return 0;
}