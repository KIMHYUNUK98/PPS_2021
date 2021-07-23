#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    int sum = 0;

    scanf("%d %d", &n, &k);

    int * coin = (int *)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += k/coin[(n-1)-i];
        k %= coin[(n-1)-i];
    }

    printf("%d", sum);

    free(coin);
    
    return 0;
}