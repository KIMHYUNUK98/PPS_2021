#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int num;
    double cal1[10];
    string cal2;
    cin >> num;

    // ��ó�� ���ڸ� �Է¹ް� for ���� 3������ �ݺ��ϵ� if������ ����Ű�� �Է� ������ continue �ϴ� ������!
    for(int i = 0 ; i < num ; i++) {
        cin >> cal1[i];
        getline(cin, cal2);
        
        for(int j = 0 ; j < cal2.size() ; j++) {
            if(cal2[j] == '\n') break;
            else if(cal2[j] == '@') cal1[i] *= 3;
            else if(cal2[j] == '%') cal1[i] += 5;
            else if(cal2[j] == '#') cal1[i] -= 7;
        }
        
        cout.precision(2);
        cout << fixed << cal1[i] << endl;
    }

    return 0;
}