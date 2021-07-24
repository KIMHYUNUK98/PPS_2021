#include <iostream>
using namespace std;

int main() {
	int fruits[11001]{ 0, };
	int num, len, tmp;
	scanf("%d %d", &num, &len);
	while (num--) {
		scanf("%d", &tmp);
		fruits[tmp] += 1;
	}
	for (int i = 1; i <= len; ++i)
		len += fruits[i];

	cout << len;
}