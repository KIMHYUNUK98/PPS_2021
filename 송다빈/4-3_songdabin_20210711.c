#include <stdio.h>

int main() {
    int n[10], r[10];
    int chk[42]={0,};
    int cnt=0;

    for (int i=0; i<10; i++) {
        scanf("%d", &n[i]);
        r[i]=n[i]%42;
        chk[r[i]]++;
    }

    for (int i=0; i<42; i++) {
        if (chk[i]>=1) cnt++;
    }

    printf("%d", cnt);

    return 0;
}