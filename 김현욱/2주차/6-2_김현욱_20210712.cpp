#include <iostream>
#include <queue>

using namespace std;

// Circular Queue ó�� ������ Queue �� ��� Ȱ������ ���
// Pop �ϰ� �ٽ� Push ���ָ� ��ȯ���ִ� ���� ���� �� ����
// ���ڸ� �ִ� ���� 1. �迭 2. ���� 3. ť ��κ� 3�� �� �ϳ��� �����ϰ� Ǯ �� ����,

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