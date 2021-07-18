#include <iostream>
#include <queue>

using namespace std;

// 배열보다는 순서를 계속 최신화 해야하기 때문에 queue or Stack을 사용
// 먼저 들어간 숫자를 먼저 꺼내야 하기 때문에 FIFO queue 사용

int main() {

    queue<int> Q;
    int num;

    cin >> num;
    
    for(int i = 1 ; i <= num ; i++) {
        Q.push(i);
    }

    while(Q.size() > 1) {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }

    cout << Q.front() << endl;

    return 0;
}