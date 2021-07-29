#include <stdio.h>

int main() {
    int n, max = 0;
    int a[1100] = {0,}, temp[1100] = {0,};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        temp[i] = a[i];
    }

    for (int j = 0; j <= n; j++) {
        for (int i = 0; i < j; i++) {
            if (a[i] > a[j]) temp[j] = ((temp[j] > (a[j] + temp[i])) ? temp[j] : (a[j] + temp[i]));
        }
        if(temp[j] > max) max = temp[j];
    }

    printf("%d", max);
}