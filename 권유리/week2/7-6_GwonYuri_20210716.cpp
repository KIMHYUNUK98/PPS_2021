#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, x, y;
	cin >> N;
	pair<int, int> p[N];
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		p[i].first = x;
		p[i].second = y;
	}

	sort(p, p + N);
	for (int i = 0; i < N; i++)
		cout << p[i].first << ' ' << p[i].second << '\n';

	return 0;
}

