#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string arr;
    int count = 0;
    int num;
    int sum = 0;

    // string ���ڿ��� �Է¹޴´�
    cin >> num;

    // for �ݺ��� if(arr[i] == 'O') count++; 
    // sum = count
    // else �� ��� count = 0���� �ʱ�ȭ ���ش�.
    for(int j = 0 ; j < num ; j++) {
        cin >> arr;
        for(int i = 0 ; i < arr.size() ; i++) {
            if(arr[i] == 'O') {
                count++;
                sum += count;
            }
            else {
                count = 0;
            }
        }
        cout << sum << endl;
        sum = 0;
        count = 0;
    }
    return 0;
}