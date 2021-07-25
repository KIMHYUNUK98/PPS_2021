#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int num;
    int temp;
    vector<int> arr
    queue<int> q;

    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> x;
        arr.push_back(x);
    }
    
    vector<int>::iterator it = arr.begin();
    sort(it.begin(), it.end());
    
    for(int i = 0 ; i < num ; i++) {
        if(q.size() == 0) {
            q.push(arr[i]);
        } else {
            temp = q.back();
            if(arr[i] == temp) continue;
            else q.push(arr[i]);
        }
    }

    while(q.size() != 0) {
        cout << q.front() << " ";
        q.pop();6_
    }

    return 0;
}