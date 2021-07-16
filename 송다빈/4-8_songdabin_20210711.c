#include <stdio.h>

int main() {
    int a, b, c;
    int cnt;

    scanf("%d %d %d", &a, &b, &c);
    
    if (b>=c) {
        printf("-1");
        return 0;
    }

    cnt=a/(c-b)+1;
    printf("%d", cnt);

    return 0;
}