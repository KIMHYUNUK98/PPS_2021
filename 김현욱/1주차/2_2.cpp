#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string arr;
    int count = 0;
    int num;
    int sum = 0;

    // string 문자열을 입력받는다
    cin >> num;

    // for 반복문 if(arr[i] == 'O') count++; 
    // sum = count
    // else 의 경우 count = 0으로 초기화 해준다.
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