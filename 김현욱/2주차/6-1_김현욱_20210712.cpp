#include <iostream>
#include <queue>

using namespace std;

// �迭���ٴ� ������ ��� �ֽ�ȭ �ؾ��ϱ� ������ queue or Stack�� ���
// ���� �� ���ڸ� ���� ������ �ϱ� ������ FIFO queue ���

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