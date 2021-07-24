#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string &s1, string &s2){
    if(s1.length() > s2.length()) return 0;
    else if(s1.length() < s2.length()) return 1;

    if(s1.compare(s2) >= 0) return 0;
    else return 1;
}

int main(void){
    cin.tie(0); cin.sync_with_stdio(0);
    int num, len; string *s, temp;
    cin >> num; s = new string [num];

    for(int i = 0; i < num; i++){
        cin >> s[i];
    }
    sort(s, s + num, cmp);

    cout << s[0] << "\n";
    for(int i = 1; i < num; i++){
        if(s[i] != s[i - 1]) cout << s[i] << "\n";
    }
    return 0;
}