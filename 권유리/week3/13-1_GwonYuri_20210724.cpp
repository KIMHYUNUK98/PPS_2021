#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, k, sum = 0;
	cin >> n >> k;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(),cmp);
    
	for (int i = 0; i < n; i++) {
		while (k - v[i] >= 0) {
			sum++;
			k -= v[i];
		}
	}
	cout << sum << '\n';
}