// + 와 - 는 우선순위가 없는 연산자이고 최소가 되기 위해서는 - 이후에 있는 +를 모두 묶으면 최소가 된다.
// stoi 함수 사용법 배우기
// 직접 푸는 거 실패..
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