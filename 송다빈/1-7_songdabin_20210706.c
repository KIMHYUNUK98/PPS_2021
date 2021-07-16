# include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    char input[600][600];

    for (int i=0; i<5*m+1; i++) {
        scanf("%s", input[i]);
    }

    int type[5] = {0,};
    int chk=0;

    for (int i=0; i<n; i++) {
        for (int j=1; j<5*m+1; j++) {
            if (j%5==0) {
                type[chk]++;
                chk=0;
                continue;
            }
            if (input[j][i*5+1]=='*') chk++;
        }
    }
    printf("%d %d %d %d %d", type[0], type[1], type[2], type[3], type[4]);
    
    return 0;
}