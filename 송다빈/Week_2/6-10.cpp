#include <iostream>
#include <set>

using namespace std;
 
int main() {
    string s;
    set<string> set;

    cin >> s;   
 
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            set.insert(str);
        }
        str = "";
    }
    cout << set.size();
}