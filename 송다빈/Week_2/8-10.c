#include <stdio.h>

int main() {
    double a, b, n, f;

	scanf("%lf %lf %lf", &a, &b, &n);
	f = a / b;
    
	while (n--) {
		scanf("%lf %lf", &a, &b);
		f = f < a / b ? f : a / b;
	}
    
	printf("%lf", f * 1000);

	return 0;
}