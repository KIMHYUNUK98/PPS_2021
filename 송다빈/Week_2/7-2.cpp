#include <iostream>

int main() {
    int m, n;
    scanf("%d %d", &n, &m);
 
    bool chk[10] = {false, };
    int r = 8, c = 8;
    int count = 0, prevR = 0;
    while (count != m - n + 1) {
        if (prevR != r && chk[r]==false && r>=n && r<=m) {
            count++;
            printf("%d", r);
            if (count % 10 == 0) printf("\n");
            else printf(" ");
            chk[r] = true;
        }
        prevR = r;
        if (count == m - n + 1) break;
        if (r * 10 + c >= n && r * 10 + c <= m) {
            count++;
            printf("%d", r * 10 + c);
            if (count % 10 == 0) printf("\n");
            else printf(" ");
        }
        switch (c) {
        case 8:
            c = 5;
            break;
        case 5:
            c = 4;
            break;
        case 4:
            c = 9;
            break;
        case 9:
            c = 1;
            break;
        case 1:
            c = 7;
            break;
        case 7:
            c = 6;
            break;
        case 6:
            c = 3;
            break;
        case 3:
            c = 2;
            break;
        case 2:
            c = 0;
            break;
        case 0:
            c = 8;
            switch (r) {
            case 8:
                r = 5;
                break;
            case 5:
                r = 4;
                break;
            case 4:
                r = 9;
                break;
            case 9:
                r = 1;
                break;
            case 1:
                r = 7;
                break;
            case 7:
                r = 6;
                break;
            case 6:
                r = 3;
                break;
            case 3:
                r = 2;
                break;
            case 2:
                r = 0;
                break;
            case 0:
                r = 8;
                break;
            }
            break;
        }
    }
    return 0;
}