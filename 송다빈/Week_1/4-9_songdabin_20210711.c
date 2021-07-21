#include <stdio.h>

int main() {
    int E, S, M, e, s, m;
    int year=0;

    scanf("%d %d %d", &E, &S, &M);
    
    e=s=m=1;

    while(1) {
        year++;
        if (E==e && S==s && M==m) break;
        e++;
        s++;
        m++;

        if (e==16) e=1;
        if (s==29) s=1;
        if (m==20) m=1;
    }

    printf("%d", year);

    return 0;
}