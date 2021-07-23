#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int num = 0;
	int minus_chk = 0;
	string tmp = "";
	string s;

	cin >> s;
 
	for (int i = 0; i <= s.size(); ++i){
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0'){
			if (minus_chk) {
				num -= stoi(tmp);
			}
			else {
				num += stoi(tmp);
			}
 
			if (s[i] == '-') {
				minus_chk = 1;
			}
 
			tmp = "";
			continue;
		}
 
		tmp += s[i];
	}
 
	cout << num << endl;
	
	return 0;
}