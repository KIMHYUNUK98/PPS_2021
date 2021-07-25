// sort �˰��򿡼� ���� �����ϴ� ����� ��� �� �־���.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getSum(string a) {
    int len = a.length();
    int sum = 0;
    for(int i = 0 ; i < len ; i++) {
        if(a[i] - '0' <= 9 && a[i] - '0' >= 0) {
            sum += a[i] - '0';
        }
    }
    return sum;
}

bool compare(string a, string b) {
    // ���̰� �ٸ� ��� ª�� ���� ������ ���� ��Ŵ
    if(a.length() != b.length()) {
        return a.length() < b.length();
    } 
    // ���̰� ���� ��� ������ ���� ���� ���� ������ ���� ��Ű�� ���ǹ�
    else {
        int aSum = getSum(a);
        int bSum = getSum(b);

        if(aSum != bSum) return aSum < bSum;
        // �� �� ���� ��� ���� �迭�� else ����
        else return a < b;
    }
}

int main() {
    int num;
    string str;
    vector<string> arr;
    vector<int> count;
    cin >> num;

    for(int i = 0 ; i < num ; i++) {
        cin >> str;
        arr.push_back(str);
    }

    // ���� ���� compare �Լ��� �ϳ� �������ش�.
    // compare ���� ��� sort�� �����Ѵ�.
    // ������ ���ĺ� ũ�� ������� ������ compare ��� ������ �ɾ��ִ� ��
    sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < num ; i++) cout << arr[i] << endl;
    
    return 0;
}
