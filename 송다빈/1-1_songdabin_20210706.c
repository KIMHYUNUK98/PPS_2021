#include <stdio.h>

int main() {
    int num[8];
    int cnt[2]={0,};
    for (int i=0; i<8; i++) {
        scanf("%d", &num[i]);
        if (i>1 && num[i-1]<num[i]) cnt[0]++;
        else if (i>1 && num[i-1]>num[i]) cnt[1]++;
    }
    if (cnt[0]==6) printf("ascending\n");
    else if (cnt[1]==6) printf("descending\n");
    else printf("mixed\n");

    return 0;
}