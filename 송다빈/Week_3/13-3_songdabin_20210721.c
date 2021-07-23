#include <stdio.h>
#include <stdlib.h>

int compare(const void *a , const void *b) {
    if( *(int*)a > *(int*)b ) return 1;
    else if( *(int*)a < *(int*)b ) return -1;
    else return 0;
} 

int main() {
    int n, l;

    scanf("%d %d", &n, &l);
    int * h = malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    qsort(h, n, sizeof(h[0]), compare);

    for (int i = 0; i < n; i++) {
        if (h[i] > l) continue;
        else l++;
    }
    printf("%d", l);

    return 0;
}