#include <stdio.h>
#include <string.h>
 
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int map[10][10], cnt;
int arr[1000000];
int J, H;

void dfs(int y, int x, int num, int d) {
    if (d == 5) {
        if (arr[num] == 0) {
            arr[num] = 1;
            cnt++;
        }
        return;
    }

    for (int i = 0; i < 4; i++) {
        int yy = y + dy[i];
        int xx = x + dx[i];

        if (map[yy][xx] != -1) dfs(yy, xx, num*10+map[yy][xx], d+1);
    }
    return;
}

int main() {
    memset(map, -1, sizeof(map));

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            J = i;
            H = j;
            dfs(i, j, map[i][j], 0);
        }
    }

    printf("%d\n", cnt);

    return 0;
}