#include <iostream>
#include <string>
using namespace std;
 
int M, N;
int type[5] = {0, };
char windows[510][510];
string s;
 
int main()
{
	cin >> M >> N;
 
	for (int i = 0; i < M * 5 + 1; ++i) {
		cin >> s;
		for (int j = 0; j < s.length(); ++j) {
			windows[i][j] = s[j];
		}
	}
 
	for (int i = 1; i < M * 5 + 1; i += 5) {
		for (int j = 1; j < N * 5 + 1; j += 5) {
			if (windows[i][j] == '.') {
				type[0]++;
			}
			else if (windows[i + 1][j] == '.') {
				type[1]++;
			}
			else if (windows[i + 2][j] == '.') {
				type[2]++;
			}
			else if (windows[i + 3][j] == '.') {
				type[3]++;
			}
			else {
				type[4]++;
			}
		}
	}
 
	for (int i = 0; i < 5; ++i) {
		cout << type[i] << " ";
	}
 
	return 0;
}