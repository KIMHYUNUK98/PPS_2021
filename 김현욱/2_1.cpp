#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string arr;
    string arr2;
    int count = 0;
    int du_count = 0;
    int tri_count = 0;
    int no_noun = 0;

    // while문 실행 -> break 조건은 입력값이 end일때 (strcpy로 문자열과 end를 비교해서 0이 출력되면 break)
    while(1) {
        // 문자열(0 이상 20 이하) 을 입력받는다.
        cin >> arr;
        arr2 = arr;
        if(arr.compare("end") == 0) break;
        else {
        // for 반복문으로 두번 연속 반복된 경우가 있으면 du_count를 세준다.
        // ee와 oo가 반복된 경우는 du_count를 세주지 않는다.
        for(int i = 0 ; i < arr.size() ; i++) {
            if(arr[i] == arr[i+1]) {
                if(arr[i] == 'e' || arr[i] == 'o') continue;
                else du_count++;
            }
        }

        // for 반복문으로 배열을 돌려서 a,e,i,o,u가 있으면 count를 증가시킨다.
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
            {
                // if(arr[i] == 모음인 경우) 해당 배열의 문자를 a로 바꾼다.
                arr[i] = 'a';
            }
            else
            {
                // else if(arr[i] == 자음인 경우) 해당 배열의 문자를 b로 바꾼다.
                arr[i] = 'b';
            }
        }

        // for 반복문으로 세번 반복된 경우가 있으면 tri_count를 세준다.
        for(int i = 0 ; i < arr.size() ; i++) 
        {
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]) tri_count++;
            if(arr[i] == 'b') no_noun++;
        }

        //두번 연속 or 세 번 연속 or 모음이 없는 경우 Not acceptable 출력
        if(du_count > 0 || tri_count > 0 || no_noun == arr.size())  
            cout << "<" << arr2 << "> " << "is not acceptable." << endl;
        else 
            cout << "<" << arr2 << "> " << "is acceptable." << endl;
            }

            du_count = 0;
            tri_count = 0;
            no_noun = 0;
        }
    return 0;
}