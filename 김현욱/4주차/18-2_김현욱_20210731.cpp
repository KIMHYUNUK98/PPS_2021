// 1, 2, 5, 7원이 주어지는 경우는 쉽게 알 수 있지만
// 숫자가 커질 수록 알고리즘을 파악하기 어려운 경우
// DP 알고리즘을 생각해보자
// 초기에 형성되는 데이터를 배열에 하나씩 저장시킨다.

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