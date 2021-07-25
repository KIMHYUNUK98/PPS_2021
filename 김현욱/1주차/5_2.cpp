#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int num;
    double cal1[10];
    string cal2;
    cin >> num;

    // 맨처음 숫자를 입력받고 for 문은 3번까지 반복하되 if문으로 엔터키를 입력 받으면 continue 하는 것으로!
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