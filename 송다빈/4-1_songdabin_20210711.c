#include <stdio.h>

int main() {
    int score[5][4]={0,};
    int total[5]={0,};
    int info[2]={0,};

    for(int i=0; i<5; i++) {
        for (int j=0; j<4; j++) {
            scanf("%d", &score[i][j]);
            total[i]+=score[i][j];
        }
        if (total[i]>info[1]) {
            info[0]=i;
            info[1]=total[i];
        }
    }
    printf("%d %d", info[0]+1, info[1]);

    return 0;
}