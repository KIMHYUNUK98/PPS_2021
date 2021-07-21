#include <stdio.h>

int main() {
    int n, input;
    int sorted[1001]={0,};
    int p[1001]={0,};
    int m[1001]={0,};

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        scanf("%d", &input);
        if (input<0) {
            sorted[-input]=1;
            m[-input]=1;
        }
        if (input>0) {
            sorted[input]=1;
            p[input]=1;
        }
        else if (input==0) sorted[0]=1;
    }

    for (int i=1000; i>0; i--) {
        if (sorted[i]==1 && m[i]==1) printf("-%d ", i);
    }

    if (sorted[0]==1) printf("0 ");

    for (int i=1; i<=1000; i++) {
        if (sorted[i]==1 && p[i]==1) printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}