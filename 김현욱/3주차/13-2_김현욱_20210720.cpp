// + �� - �� �켱������ ���� �������̰� �ּҰ� �Ǳ� ���ؼ��� - ���Ŀ� �ִ� +�� ��� ������ �ּҰ� �ȴ�.
// stoi �Լ� ���� ����
// ���� Ǫ�� �� ����..
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    string str;
    string temp;
    int output;
    bool minus = false;

    cin >> str;

    for(int i = 0 ; i <=str.size() ; i++) {
        if(str[i] == '-' || str[i] == '+' || str[i] == '\0') {
            if(minus)
                output -= stoi(temp);
            else 
                output += stoi(temp);
            
            temp = "";
            if(str[i] == '-')
                minus = true;
        } else 
            temp += str[i];
    }

    cout << output;
    return 0;
}