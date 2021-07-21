#include <stdio.h>

int main() {
    int m, n;
    int circle[5001] = {0,};
    int cnt=0, chk=1;

    scanf("%d %d", &n, &m);
    printf("<");

    for (int i=0; i<n; i++) {
        cnt=0;
        while (1) {
            if (circle[chk]==0)
                cnt++;
            if (cnt==m) {
                circle[chk] = -1;
                if (i==n-1) printf("%d>",chk);
                else printf("%d, ", chk);
                break;
            }
            chk++;
            if (chk>n) chk=1;
        }
    }
}