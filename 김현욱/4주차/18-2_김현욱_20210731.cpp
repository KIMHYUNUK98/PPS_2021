// 1, 2, 5, 7���� �־����� ���� ���� �� �� ������
// ���ڰ� Ŀ�� ���� �˰����� �ľ��ϱ� ����� ���
// DP �˰����� �����غ���
// �ʱ⿡ �����Ǵ� �����͸� �迭�� �ϳ��� �����Ų��.

#include <iostream>
using namespace std;

int main() {
    vector<int> arr(100000,0);
    int num;

    arr[1]=1;
    arr[2]=1;
    arr[3]=2;
    arr[4]=2;
    arr[5]=1;
    arr[6]=2;
    arr[7]=1;

    cin >> num;

    for(int i = 8 ; i <=num ; i++) {
        if(i % 7 == 0) arr[i] = i / 7;
        else arr[i] = min({arr[i-5], arr[i-2], arr[i-1]}) +1;
    }

    cout << arr[num];
    

    return 0;
}