#include <stdio.h>
#include <algorithm>

int main(void) {
	int arr[100000], ans[10010], top = 0, m, n;
	arr[top++] = 666;
	for (int i = 1; i < 10000; i++) {
		arr[top++] = i * 1000 + 666;
	}
	for (int i = 0; i < 10; i++) {
		if (i == 6)continue;
		for (int j = 0; j < 1000; j++) {
			arr[top++] = j * 10000 + 6660 + i;
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			arr[top++] = j * 100000 + 66600 + i;
		}
	}
	for (int i = 0; i < 1000; i++) {
		for (int j = 0; j < 10; j++) {
			arr[top++] = j * 1000000 + 666000 + i;
		}
	}
	for (int i = 0; i < 10000; i++) {
		arr[top++] = 6660000 + i;
	}
	std::sort(arr, arr + top);
	ans[1] = arr[0];
	m = 2;
	for (int i = 1; i < top && m <= 10002; i++) {
		if (arr[i] != arr[i - 1]) {
			ans[m++] = arr[i];
		}
	}
	scanf("%d", &n);
	printf("%d", ans[n]);
}