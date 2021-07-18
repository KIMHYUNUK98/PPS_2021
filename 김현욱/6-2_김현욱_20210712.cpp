#include <iostream>
#include <queue>

using namespace std;

// Circular Queue 처럼 보여서 Queue 를 어떻게 활용할지 고민
// Pop 하고 다시 Push 해주면 순환해주는 구조 만들 수 있음
// 숫자를 넣는 경우는 1. 배열 2. 스택 3. 큐 대부분 3개 중 하나로 간단하게 풀 수 있음,

int main() {
    queue<int> Q;

    int num , order;
    cin >> num;
    cin >> order;

    for(int i = 1 ; i <= num ; i++) {
        Q.push(i);
    }
    cout << "<";

    while(Q.size() != 1) {
        for(int j = 0 ; j < order-1 ; j++) {
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front() << ", ";
        Q.pop();
    }

    cout << Q.front() << ">" ;

    return 0;
}