#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string s;
	string temp[1000];

	cin >> s;
	int l = s.length();

	for(int i = 0; i < l; i++){
		temp[i] = s.substr(i, l);
	}

	sort(temp, temp+l);

	for(int i = 0; i < l; i++){
		cout << temp[i] << endl;
	}
}