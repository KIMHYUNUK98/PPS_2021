#include<iostream>
#include<queue>
using namespace std;

queue<string> person[201];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int age;
	string name;

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> age;
		cin >> name;
		person[age].push(name);
	}
	for (int i = 1; i < 201; i++) {
		while (!person[i].empty()) {
			cout << i << ' ' << person[i].front() << '\n';
			person[i].pop();
		}
	}
}